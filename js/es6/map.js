// A Map holds key-value pairs where the keys can be any datatype.
// A Map remembers the original insertion order of the keys.
//  Map has a property that represents the size of the map.
//  ref: https://www.w3schools.com/js/js_object_maps.asp

// create new map
const fruits = new Map([
  ["apples", 500],
  ["bananas", 300],
  ["oranges", 200]
]);

//create a Map
const studentsID = new Map();

// add elements to a map using the set method
studentsID.set('John', 1);
studentsID.set('Charles', 2);
studentsID.set('Angel', 3);

// use set method to change existing maps
studentsID.set('John', 01);
studentsID.set('Charles', 02);
studentsID.set('Angel', 3);

// use get method to get the value of a key in a map
console.log(`John's ID: ${studentsID.get('John')}`);
// use size property to get the size of a map
console.log(studentsID.size);

// use delete method to remove an element from the Map
studentsID.delete('John');

// The forEach() method invokes a callback for each key/value pair in a Map:
studentsID.forEach ((key, value) => {
  console.log(`${key}: ${value}`);
});

// use entries to create an iterable
for (const id of studentsID.entries()) {
  console.log(id);
}

// The values() method returns an iterator object with the values in a Map:
let count = 0;
for (const id of studentsID.values()) {
  count += 1;
  console.log(id);
}
console.log(`Number of students: ${count}`)


// using objects as keys is an important Map feature
// create new objects
const apples = {name: 'Apples'};
const bananas = {name: 'Bananas'};
const oranges = {name: 'Oranges'};

// create a new map
const fruitsList = new Map();

// add elements to the map
fruitsList.set(apples, 500);
fruitsList.set(bananas, 300);
fruitsList.set(oranges, 200);

console.log();
// NOTE: The key is an object (apples) not a string 'apples'
console.log(fruitsList.get('apples')); // returns undefined
console.log(fruitsList.has('apples'));
console.log(fruitsList.get(apples));
console.log(fruitsList.has(apples));

for (fruit of fruitsList.entries()) {
  console.log(fruit);
}

console.log();
console.log(fruits.has('apples'));
console.log(fruitsList.has(apples));
// Maps are objects
console.log(typeof fruits); 
console.log(fruitsList instanceof Map);

console.log();
console.log(fruits);
console.log(fruitsList);
// clear maps
fruits.clear();
fruitsList.clear();
console.log(fruits, fruitsList);
