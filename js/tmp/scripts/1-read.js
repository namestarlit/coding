#!/usr/bin/node

const { readFile } = require('fs').promises;
const { readFileSync } = require('fs');

readFile('file.txt', 'utf-8')
  .then(text => console.log(text));

console.log(readFileSync('file_.txt', 'utf-8'));
