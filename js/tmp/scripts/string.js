#!/usr/bin/node

const dash = 'Dash';

console.log(typeof dash.toUpperCase);
console.log(dash.toUpperCase());
console.log(dash.toLowerCase());
console.log(dash.indexOf('a'));
console.log(dash.trim());
console.log(dash.slice(2));

const sequence = [1, 2, 3];

console.log(sequence);
sequence.push(4);
sequence.push(5);
console.log(sequence);
console.log(sequence.pop());
console.log(sequence);
console.log(String(6).padStart(3, '0'));

random = 'hello kitty who has the name for me';
console.log(random.split(' '));

const words = random.split(' ');
console.log(words);
console.log(words.join(', '));
console.log('#'.repeat(40));
