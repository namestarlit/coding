#!/usr/bin/node
// Writing to a file using fs module
'use strict';

const fs = require('fs');
const content = 'This is a really dangerous programming language';

fs.writeFile('js.txt', content, err => {
  if (err) {
    console.log(err);
  }
});
