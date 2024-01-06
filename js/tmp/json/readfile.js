#!/usr/bin/node
// Read file content using 'fs' module
'use strict';

const fs = require('fs')

fs.readFile('js.txt', 'utf-8', (err, data) => {
  if (err) {
    console.error(err);
    return;
  }
  console.log(data);
});
