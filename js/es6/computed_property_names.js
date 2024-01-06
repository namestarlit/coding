// To use  computed values for property names,
// you use square brackets and pass the expression.
const key1 = 'language';
const key2 = 'isStudent';

const age = 19;
const key3 = 'ageIsMoreThan18';
const key4 = 'ageIsLessThan18';

const obj = {
  name: 'Dilion',
  [age > 18 ? key3 : key4]: true,
  [key1]: 'JavaScript',
  [key2]: true,
}

console.log(obj);
console.log();

for (const key in obj) {
  console.log(`${key}: ${obj[key]}`);
}
console.log();

for (const [key, val]  of Object.entries(obj)) {
  console.log(key, val);
}
