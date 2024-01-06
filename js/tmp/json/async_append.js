#!/usr/bin/node
// Append content to a file with promises.
'use strict';

const fs = require('fs/promises');

async function appendContent () {
  try {
    const content = 'js is dangerous';
    await fs.appendFile('js.txt', content);
  } catch (err) {
    console.log(err);
  }
}

appendContent();
