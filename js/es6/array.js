// The Array.from() method returns an Array object from
// any object with a length property or any iterable object
const str = 'ABCDE';
const alphabets = Array.from(str);
console.log(alphabets);

keys = alphabets.keys();

for (key of keys) {
  console.log(key);
}

const numbers = [4, 9, 16, 25, 29];
const first = numbers.find(func);
const index = numbers.findIndex(func);

// NOTE: The function takes three arguments
// The array value, index and the array itself
function func(value, index, array) {
  return value > 18;
}
