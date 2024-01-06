var __extends = (this && this.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (Object.prototype.hasOwnProperty.call(b, p)) d[p] = b[p]; };
        return extendStatics(d, b);
    };
    return function (d, b) {
        if (typeof b !== "function" && b !== null)
            throw new TypeError("Class extends value " + String(b) + " is not a constructor or null");
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
// there are 3 basic types in TypeScript
var isDone = false;
var lines = 42;
var name = 'TypeScript';
// but you can omit the type annotations
// if the variables are derived from explicit literals
var isDone = false;
var lines = 42;
var name = 'TypeScript';
// when it's impossible to know the type beforehand
// there is the 'any' type
var notSure = 4;
notSure = 'Maybe a string instead';
notSure = false; // okay, definitely a boolean
// use 'const' keyword for constants
var numLivesForCat = 9;
numLivesForCat = 1; // Error
// for collections, there are typed arrays and generic arrays
var list = [1, 2, 3, 4];
// alternatively, using the generic array type
var list = [1, 2, 3, 4];
// for enumerations:
var Color;
(function (Color) {
    Color[Color["Red"] = 0] = "Red";
    Color[Color["Green"] = 1] = "Green";
    Color[Color["Blue"] = 2] = "Blue";
})(Color || (Color = {}));
;
var c = Color.Green;
console.log(Color[c]); // Green
// lastly, void is used when a function returns nothing (undefined), or null
function bigHorribleAlert() {
    alrt("I am a little annoying box!");
}
// functions are fist class citizens
// they support the lambda 'fat arrow' syntax
// and use type interface
// the following functions are equivalent
// the same signature will be infered by the compiler
// and same JavaScript will be emmited
var f1 = function (i) { return i * i; };
// return type inferred
var f2 = function (i) { return i * i; };
// arrow function syntax
var f3 = function (i) { return i * i; };
// arrow function with return type inferred
var f4 = function (i) { return i * i; };
// arrow function, return type inferred, braceless
var f5 = function (i) { return i * i; };
// object that implements the Person interface
// can be treated as a Person since it has the
// name and move properties.
var p, _a = void 0,  = _a.name,  = _a["Bobby"],  = _a.move;
(function () { });
;
// objets that have the optinal property
var validPerson, _b = void 0,  = _b.name,  = _b["Bobby"],  = _b.age,  = _b[32],  = _b.move;
(function () { });
;
// not a valid person because age is not of number type
var invalidPerson, _c = void 0,  = _c.name,  = _c["Bobby"],  = _c.age,  = _c.true;
// only the paremeters' type are important not the names
var mySearch;
mySearch = function (src, sub) {
    return src.search(sub) != -1;
};
// class members are public by default
var Point = /** @class */ (function () {
    // constructor - the public/private keyword will generate the boiler plate code
    // for the property and the initialization in the constructor.
    // in this example, 'y' will be defined just like 'x' is, but with less code.
    // default values are also supported
    function Point(x, y) {
        if (y === void 0) { y = 0; }
        this.y = y;
        this.x = x;
    }
    Point.prototype.dist = function () { return Math.sqrt(this.x * this.x + this.y * this.y); };
    // static memebers
    Point.origin = new Point(0, 0);
    return Point;
}());
// classes can be explicitly marked as implementing an interface
// any missing properties will cause an error at compire time
var PointPerson = /** @class */ (function () {
    function PointPerson() {
    }
    PointPerson.prototype.move = function () { };
    return PointPerson;
}());
var p1 = new Point(10, 20);
var p2 = new Point(25); // y will be 0
// inheritance
var Point3D = /** @class */ (function (_super) {
    __extends(Point3D, _super);
    function Point3D(x, y, z) {
        if (z === void 0) { z = 0; }
        var _this = _super.call(this, x, y) || this; // explicit call to the super class contructor is mandatory
        _this.z = z;
        return _this;
    }
    // override
    Point3D.prototype.dist = function () {
        var d = _super.prototype.dist.call(this);
        return Math.sqrt(d * d + this.z * this.z);
    };
    return Point3D;
}(Point));
