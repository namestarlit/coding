#!/usr/bin/node

const list = [1, 2, 3, 4, 5, 6];

console.log(list.indexOf(2));
console.log(list.lastIndexOf(2));
console.log(list.slice(2, 4));
console.log(list.slice(2));

function remove (array, index) {
  return array.slice(0, index).concat(array.slice(index++));
}

console.log(remove(list, 2));
