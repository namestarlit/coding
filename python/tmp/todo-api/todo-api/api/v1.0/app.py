#!/usr/bin/env python3
"""Todo RESTful API implementation."""
from flask import Flask
from flask import jsonify, make_response, request, url_for
from flask import abort
from flask_httpauth import HTTPBasicAuth


app = Flask(__name__)
app.url_map.strict_slashes = False
auth = HTTPBasicAuth()

tasks = [
        {
            'id': 1,
            'title': u'Buy Groceries',
            'description': u'Milk, Cheese, Pizza, Fruit, Tylenol',
            'done': False
            },
        {
            'id': 2,
            'title': u'Learn Python',
            'description': u'Need to find a good Python tutorial on the web.',
            'done': False
            }
        ]




@app.route('/todo/api/v1.0/tasks', methods=['GET'])
@auth.login_required
def get_tasks():
    """returns a JSON of all tasks."""
    return (jsonify({'tasks': [make_public_task(task) for task in tasks]}))


@app.route('/todo/api/v1.0/tasks/<int:task_id>', methods=['GET'])
@auth.login_required
def get_task(task_id):
    """returns a JSON of a single task of a given id."""
    task = [task for task in tasks if task['id'] == task_id]
    if not task:
        abort(404)
    return (jsonify({'task': make_public_task(task[0])}))


@app.errorhandler(404)
def not_found(error):
    """handles 404 error."""
    return (make_response(jsonify({'error': 'Not Found'}), 404))


@app.route('/todo/api/v1.0/tasks', methods=['POST'])
@auth.login_required
def create_task():
    """Creates a new task and adds it to the tasks."""
    if not request.json:
        abort(400)
    if 'title' not in request.json:
        abort(400)

    task = {
            'id': tasks[-1]['id'] + 1,
            'title': request.json['title'],
            'description': request.json.get('description', ""),
            'done': False
            }
    tasks.append(task)

    return (jsonify({'task': make_public_task(task)}), 201)


@app.route('/todo/api/v1.0/tasks/<int:task_id>', methods=['PUT'])
@auth.login_required
def update_task(task_id):
    """Updates exsting tasks."""
    task = [task for task in tasks if task['id'] == task_id]

    if not task:
        abort(404)
    if not request.json:
        abort(400)
    if 'title' in request.json and type(request.json['title']) is not unicode:
        abort(400)
    if 'description' in request.json and \
            type(request.json['description']) is not unicode:
        abort(400)
    if 'done' in request.json and type(request.json['done']) is not bool:
        abort(400)

    task[0]['title'] = request.json.get('title', task[0]['title'])
    task[0]['description'] = request.json.get('description',
                                              task[0]['description'])
    task[0]['done'] = request.json.get('done', task[0]['done'])

    return (jsonify({'task': make_public_task(task[0])}))


@app.route('/todo/api/v1.0/tasks/<int:task_id>', methods=['DELETE'])
@auth.login_required
def delete_task(task_id):
    """Deletes a task."""
    task = [task for task in tasks if task['id'] == task_id]

    if not task:
        abort(404)
    tasks.remove(task[0])
    return (jsonify({'result': True}))

@auth.get_password
def get_password(username):
    """Authentication of user."""
    if username == 'starlit':
        return 'python'
    return None

@auth.error_handler
def unauthorized():
    """Error handler for unathorized access."""
    return (jsonify({'error': 'Unauthorized access'}), 401)


def make_public_task(task):
    """creates a public task response without id."""
    new_task = {}
    for field in task:
        if field == 'id':
            new_task['uri'] = url_for('get_task', task_id=task['id'],
                                     _external=True)
        else:
            new_task[field] = task[field]

    return new_task


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000, debug=True)
