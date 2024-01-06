#!/usr/bin/node

class Temperature {
  constructor (celsius) {
    this.celsius = celsius;
  }

  get fahrenheit () {
    return this.celsius * 1.8 + 32;
  }

  set fahrenheit (value) {
    return this.celsius = (value - 32) / 1.8;
  }

  static from_fahrenheit (value) {
    return new Temperature((value - 32) / 1.8);
  }
}

const temp = new Temperature(22);

console.log(temp.fahrenheit);

temp.fahrenheit = 86;
console.log(temp.celsius);
console.log();

temp_2 = Temperature.from_fahrenheit(100);
console.log(temp_2.celsius);
console.log(temp_2.fahrenheit);
