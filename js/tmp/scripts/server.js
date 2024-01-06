#!/usr/bin/node

const { createServer } = require('http');

const server = createServer((request, response) => {
  response.writeHead(200, { 'Content-Type': 'text/plain' });
  response.write('Hello client');
  response.end();
});
server.listen(8000);
console.log('Listening! (8000)');
