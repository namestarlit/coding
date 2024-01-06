#!/usr/bin/node

function isEven (n) {
  if (n < 0) { return 'Number must be positive'; } else if (n == 0) { return true; } else if (n == 1) { return false; } else { return isEven(n - 2); }
}

console.log(isEven(10));
console.log(isEven(11));
console.log(isEven(-10));
