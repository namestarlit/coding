// ES6 allows function parameters to have default values.
// Default parameters
function func(x, y = 10) {
  return x + y;
}

console.log(func(5));

// Rest parameters
function sum(...args) {
  let sum = 0;
  for (const arg of args) {
    sum += arg;
  }
  return sum;
}

const x = sum(4, 9, 16, 25, 29, 100, 66, 77);
console.log(x);
