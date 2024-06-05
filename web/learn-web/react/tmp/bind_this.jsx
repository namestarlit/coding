import React from 'react'

/*
 * options to bind `this` instance to React components
 */

class MyComponent extends React.Component {
	constructor(props) {
		super(props);
	}

  /* binding this using anonymous(arrow) functions */
	handleClick = () => {
		console.log(this); // the React component instance
	}

	render() {
		return (
			<button onClick={this.handleClick}>click here</button>
		);
	}
}


class AnotherComponent extends React.Component {
  constructor(props) {
    super(props);

    /* binding in the constructor */ 
    this.handleClick = this.handleClick.bind(this);
  }

  handleClick() {
    console.log(this);
  }

  render() {
    return (
    <button onClick={this.handleClick}>click here</button>
    );
  }
}

export default MyComponent;
// export default AnotherComponent;
