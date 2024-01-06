#!/usr/bin/node

const day_1 = {
  squirrel: false,
  events: ['Work', 'touched tree', 'pizza', 'running']
};
console.log(day_1.squirrel);
console.log(day_1.wolf);
day_1.wolf = false;
console.log(day_1.wolf);
console.log(day_1.events);
console.log(day_1.events); // this works too
console.log(day_1);

delete day_1.wolf;
console.log(day_1);
console.log('events' in day_1);
Object.assign(day_1, { state: 'Good day' });
console.log(day_1);
console.log(Object.keys(day_1));
