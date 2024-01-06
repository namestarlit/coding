#!/usr/bin/node

let num;

for (num = 0; num < 100; num += 1) {
  if (num % 3 == 0 && num % 5 == 0) { console.log('FizzBuzz'); } else if (num % 5 == 0) { console.log('Buzz'); } else if (num % 3 == 0) { console.log('Fizz'); } else { console.log(num); }
}
