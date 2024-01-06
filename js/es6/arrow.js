// Arrow functions allows a short syntax for writing function expressions
// You don't need the 'function' keyword, the 'return' keyword, and the curly brackets.

//ES5
var x = function (x, y) {
  return x * y;
}
console.log(x(4, 8));

//ES6
const y = (x, y) => x * y;
console.log(y(6, 7));

// Arrow functions do not have their own 'this'
// They are not well suited for defining object methods.
// Arrow functions are not hoisted.
// They must be defined before they are used.
// Using const is safer than using var, because a function expression
// is always a constant value.
// You can only omit the 'return' keyword and the curly brackets
// if the function is a single statement. Because of this,
// it might be a good habit to always keep them:

const z = (x, y) => { return x * y };

console.log(z(4, 5));

const materials = ['Hydrogen', 'Helium', 'Lithium', 'Beryllium'];
// using an arrow function in a map function
console.log(materials.map((material) => material.length));
