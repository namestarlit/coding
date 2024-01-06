#!/usr/bin/node

const { readFile, writeFile } = require('fs');

readFile('file.txt', 'utf-8', (error, text) => {
  if (error) { throw error; }
  console.log('The file contains:', text);
});

writeFile('file_.txt', 'Node was here', error => {
  if (error) { console.log(`Failed to write file: ${error}`); } else { console.log('File written'); }
});
