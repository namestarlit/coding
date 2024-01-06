#!/usr/bin/node

function max (...numbers) {
  let max_num = -Infinity;

  for (const number of numbers) {
    if (number > max_num) { max_num = number; }
  }
  return max_num;
}

console.log(max(20, 30, 40));

numbers = [20, 11, -9, 23, 21];
console.log(max(...numbers));
console.log(max(31, ...numbers, 24));
