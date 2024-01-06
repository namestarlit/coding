#!/usr/bin/node

class Rabbit {
  constructor (type) {
    this.type = type;
  }

  speak (line) {
    console.log(`The ${this.type} rabbit says '${line}'`);
  }
}

Rabbit.prototype.toString = function () {
  return `a ${this.type} rabbit`;
};

const little_rabbit = new Rabbit('little');
const black_rabbit = new Rabbit('black');

console.log(String(black_rabbit));
console.log(String(little_rabbit));
console.log();

black_rabbit.speak("Hell no, this can't be happening!");
little_rabbit.speak('This is next level stuff!');
console.log();

Rabbit.prototype.teeth = 'Small';
console.log(black_rabbit.teeth);
black_rabbit.teeth = 'sharp long teeth';
console.log(black_rabbit.teeth);
console.log(Rabbit.prototype.teeth);
console.log();

const obj = new class {get_word () { return 'hello'; }}();
console.log(obj.get_word());
console.log();

// Map() built-in method.
const birthdays = new Map();
birthdays.set('Asnath', '22.03');
birthdays.set('Paul', '03.10');
console.log(birthdays.has('Asnath'));
console.log(birthdays.get('Asnath'));

console.log({ x: 1 }.hasOwnProperty('x'));
