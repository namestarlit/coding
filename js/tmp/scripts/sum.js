#!/usr/bin/node

console.log(range(10, 20, 2));
console.log(range(20, 10));
console.log(sum([10, 20, 30]));
console.log(sum(range(40, 20)));

function range (start, end, step = 1) {
  const numbers = [];

  if (start < end || start === end) {
	   for (let i = start; i <= end; i += step) { numbers.push(i); }
  } else {
    if (step > 0) { step = -step; }

    for (let i = start; i >= end; i += step) { numbers.push(i); }
  }
  return numbers;
}

function sum (numbers) {
  let total = 0;

  for (const number of numbers) { total += number; }

  return total;
}
