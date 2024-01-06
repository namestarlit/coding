#!/usr/bin/node

function multiplier (factor) {
  return number => number * factor;
}

const twice = multiplier(2);
console.log(twice(5));
