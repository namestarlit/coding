#!/usr/bin/node

// Number() converts input to a number.
const num = Number(prompt('Enter a number '));

if (!Number.isNaN(num)) {
  console.log('Your number is ', num);
} else {
  console.log("Hey, why didn't you give me a number?");
}
