// The JavaScript for/of statement loops through
// the values of an iterable objects.
// for/of lets you loop over data structures that are iterable
// such as Arrays, Strings, Maps, NodeLists, and more.
const cars = ['BMW', 'Volvo', 'Mini'];
let text = "";

// looping over an array
for (const car of cars) {
  text += car + " ";
}
console.log(text);

const language = "JavaScript";
let lang = "";

// looping over a string
for (const c of language) {
  lang += c + " ";
}
console.log(lang);

console.log(...language);
