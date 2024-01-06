#!/usr/bin/node

let total = 0; let count = 1;

while (count <= 10) {
  total += count;
  count += 1;
}

console.log(total);

// alternative version
// console.log(sum(range(1,10)));
