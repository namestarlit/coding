#!/usr/bin/node

class Rectangle {
  constructor (height, width) {
    this.height = height;
    this.width = width;
  }

  // Getter
  get area () {
    return this.calArea();
  }

  // Method
  calArea () {
    return this.height * this.width;
  }

  * getSides () {
    yield this.height;
    yield this.width;
    yield this.height;
    yield this.width;
  }
}

const square = new Rectangle(10, 10);

console.log(square.area);
console.log([...square.getSides]);
