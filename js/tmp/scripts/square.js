#!/usr/bin/node

function square (num) {
  return (num * num);
}

const pow = function (base, exponent) {
  let pow_x = 1;

  for (let num = 0; num < exponent; num++) { pow_x *= base; }

  return pow_x;
};

const num_sqr = square(20);

console.log(num_sqr);
console.log(pow(2, 10));
