// The ... operator expands an iterable (like an array) into more elements

const q1 = ["Jan", "Feb", "Mar"];
const q2 = ["Apr", "May", "Jun"];
const q3 = ["Jul", "Aug", "Sep"];
const q4 = ["Oct", "Nov", "Dec"];

// expand the arrays into a single array
const year = [...q1, ...q2, ...q3, ...q4];

// iterate through the array to print the elements
for (let i = 0; i < year.length; i++) {
  console.log(year[i]);
}

// The ... operator can be used to expand an iterable
// into more arguments for function calls
const numbers = [23, 55, 21, 87, 56];
let maxValue = Math.max(...numbers);
console.log(maxValue);
