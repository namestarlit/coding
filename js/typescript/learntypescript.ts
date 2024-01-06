// there are 3 basic types in TypeScript
let isDone: boolean = false;
let lines: number = 42;
let name: string = 'TypeScript';

// but you can omit the type annotations
// if the variables are derived from explicit literals
let isDone = false;
let lines = 42;
let name = 'TypeScript';

// when it's impossible to know the type beforehand
// there is the 'any' type
let notSure: any = 4;
notSure = 'Maybe a string instead';
notSure = false // okay, definitely a boolean

// use 'const' keyword for constants
const numLivesForCat = 9;
numLivesForCat = 1; // Error

// for collections, there are typed arrays and generic arrays
let list: number[] = [1, 2, 3, 4];
// alternatively, using the generic array type
let list: Array<number> = [1, 2, 3, 4];

// for enumerations:
enum Color { Red, Green, Blue };
let c: Color = Color.Green;
console.log(Color[c]); // Green

// lastly, void is used when a function returns nothing (undefined), or null
function bigHorribleAlert(): void {
  alrt("I am a little annoying box!");
}

// functions are fist class citizens
// they support the lambda 'fat arrow' syntax
// and use type interface

// the following functions are equivalent
// the same signature will be infered by the compiler
// and same JavaScript will be emmited
let f1 = function (i: number): number { return i * i };

// return type inferred
let f2 = function (i: number) { return i * i };

// arrow function syntax
let f3 = (i: number): number => { return i * i };

// arrow function with return type inferred
let f4 = (i: number) => { return i * i };

// arrow function, return type inferred, braceless
let f5 = (i: number) => i * i;


// interfaces are structural
// anything that has the properties, is compliant with the interface
interface Person {
  name: string;
  // optinal properties marked with a '?'
  age?: number;
  // and functions
  move(): void;
}

// object that implements the Person interface
// can be treated as a Person since it has the
// name and move properties.
let p: Person { name: 'Bobby', move: () => {} };

// objets that have the optinal property
let validPerson: Person { name: 'Bobby', age: 32, move: () => {} };

// not a valid person because age is not of number type
let invalidPerson: Person { name: 'Bobby', age: true };

// interfaces can also describe a function type
interface searchFunc {
  (source: string, subString: string): boolean;
}

// only the paremeters' type are important not the names
let mySearch: searchFunc;
mySearch = function (src: string, sub: string) {
  return src.search(sub) != -1;
}

// class members are public by default
class Point {
  // properties
  x: number;

  // constructor - the public/private keyword will generate the boiler plate code
  // for the property and the initialization in the constructor.
  // in this example, 'y' will be defined just like 'x' is, but with less code.
  // default values are also supported
  constructor (x: number, public y: number = 0) {
    this.x = x
  }

  dist (): number { return Math.sqrt(this.x * this.x + this.y * this.y); }

  // static memebers
  static origin = new Point(0, 0);
}

// classes can be explicitly marked as implementing an interface
// any missing properties will cause an error at compire time
class PointPerson implements Person {
  name: string;
  move () {}
}

let p1 = new Point(10, 20);
let p2 = new Point(25); // y will be 0

// inheritance
class Point3D extends Point {
  constructor (x: number, y: number, public z: number = 0) {
    super(x, y); // explicit call to the super class contructor is mandatory
  }

  // override
  dist (): number {
    let d = super.dist();
    return Math.sqrt(d * d + this.z * this.z);
  }
}
