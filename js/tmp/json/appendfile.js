#!/usr/bin/node
// Append content to a file
'use strict';

const fs = require('fs');
const content = 'Beware of JavaScript';

fs.appendFile('js.txt', content, err => {
  if (err) {
    console.log(err)
  }
});
