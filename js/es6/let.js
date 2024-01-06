// the 'let' keyword is used to declare variables
// with a block scope

var x = 10; 
console.log(x); // x is 10 here
{
  let x = 2; 
  console.log(x); // x is 2 here
}
console.log(x); // x is 10 here
