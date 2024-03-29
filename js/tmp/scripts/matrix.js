#!/usr/bin/node

class Matrix {
  constructor (width, height, element = () => undefined) {
    this.width = width;
    this.height = height;
    this.content = [];

    for (let y = 0; y < height; y++) {
      for (let x = 0; x < width; x++) {
        this.content[y * width + x] = element(x, y);
      }
    }
  }

  get (x, y) {
    return this.content[y * this.width + x];
  }

  set (x, y, value) {
    this.content[y * this.width + x] = value;
  }
}

class MatrixIterator {
  constructor (matrix) {
    this.x = 0;
    this.y = 0;
    this.matrix = matrix;
  }

  next () {
    if (this.y == this.matrix.height) { return { done: true }; }

    const value = {
      x: this.x,
      y: this.y,
      value: this.matrix.get(this.x, this.y)
    };
    this.x++;

    if (this.x == this.matrix.width) {
      this.x = 0;
      this.y++;
    }

    return { value, done: false };
  }
}

Matrix.prototype[Symbol.iterator] = function () {
  return new MatrixIterator(this);
};

const matrix = new Matrix(2, 2, (x, y) => `value ${x},${y}`);

for (const { x, y, value } of matrix) { console.log(x, y, value); }
console.log();

class SymmetricMatrix extends Matrix {
  constructor (size, element = (x, y) => undefined) {
    super(size, size, (x, y) => {
      if (x < y) { return element(y, x); } else { return element(x, y); }
    });
  }

  set (x, y, value) {
    super.set(x, y, value);
    if (x != y) { super.set(y, x, value); }
  }
}

const symetric_matrix = new SymmetricMatrix(5, (x, y) => `${x}, ${y}`);
console.log(symetric_matrix.get(2, 3));
console.log(symetric_matrix instanceof SymmetricMatrix);
