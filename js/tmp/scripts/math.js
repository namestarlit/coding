#!/usr/bin/node

function random_point (radius) {
  const angle = Math.random() * 2 * Math.PI;

  return {
    x: radius * Math.cos(angle),
    y: radius * Math.sin(angle)
  };
}

console.log(random_point(10));

// Math.floor rounds a number to the nearest whole number.
console.log(Math.floor(Math.random() * 20));
