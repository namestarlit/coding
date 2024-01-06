// A set is a collection of unique values
// A set can not have the same member more than once

// create a set
const letters = new Set();

// add some values to the set
letters.add('a');
letters.add('b');
letters.add('b'); // this will silently be ignore and not added

console.log(letters);
console.log(...letters);
