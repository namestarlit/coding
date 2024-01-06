#!/usr/bin/node

function Rabbit (type) {
  this.type = type;
}

Rabbit.prototype.speak = function (line) {
  console.log(`The ${this.type} rabbit says '${line}'`);
};

const weird_rabbit = new Rabbit('Weird');

console.log(Object.getPrototypeOf(Rabbit) === Function.prototype);
console.log(Object.getPrototypeOf(weird_rabbit) === Rabbit.prototype);
