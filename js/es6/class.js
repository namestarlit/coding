// JavaScript Classes are templates for JavaScript Objects.
// Use the keyword class to create a class.
// Always add a method named constructor():
// NOTE: A JavaScript class is not an object, it's a template of JavaScript objects

class Car {
  constructor (name, year) {
    this.name = name;
    this.year = year;
  }

  age() {
    const date = new Date();
    return date.getFullYear() - this.year;
  }
}

// create a new object using the class
const car = new Car('BMW', 2014);
console.log(car);
brand = car.name;
year = car.year;
console.log(`${brand} -> ${year}`);
console.log(`My ${brand} is ${car.age()} year old`);
