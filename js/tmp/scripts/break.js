#!/usr/bin/node

for (let num = 20; ;num += 1) {
  if (num % 7 === 0) {
    console.log(num);
    break;
  }
}
