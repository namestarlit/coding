// the 'const' keyword allows you to declare a constant
// i.e. a JavaScript variable with a constant value
// constants are similar to 'let' variables except that
// the value cannot be changed.

var x = 10;
console.log(x); // x is 10 here

{
  const x = 2;
  console.log(x); // x is 2 here
}
console.log(x); // x is 10 here
