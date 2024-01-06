#!/usr/bin/node

let name;

do {
  name = prompt('Who are you? ');
} while (!name);

console.log(name);
