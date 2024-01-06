// It represents a unique "hidden" identifier that
// no other code can accidentally access.
const person = {
  firstName: 'John',
  lastName: 'Doe',
  age: 50,
  eyeColor: 'blue'
};

let id = Symbol('id');
person[id] = 140353;
console.log(person[id]);
console.log(person.id); // this is still undefined


// Symbols always have unique values even if they have the same ids
const check = Symbol("id") == Symbol("id"); // false
console.log(check);
