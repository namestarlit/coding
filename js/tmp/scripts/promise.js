#!/usr/bin/node

const fifteen = Promise.resolve(15);

fifteen.then(value => console.log(`Got ${value}`));
