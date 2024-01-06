#!/usr/bin/node

'use strict';

function spot_bug () {
  for (let counter = 0; counter < 10; counter++) { console.log('Happy Debugging!'); }
}

spot_bug();

function Person (name) {
  this.name = name;
}

const person = new Person('Mtu');
console.log(person.name);
