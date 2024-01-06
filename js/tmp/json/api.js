#!/usr/bin/node
// Working with API using request module
'use strict';

const request = require('request')
const URL = 'https://api.jsonbin.io/v3/qs/64c4dd3a8e4aa6225ec7193c'

request(URL, function (error, response, body) {
  if (error) {
    console.log(error);
  } else {
    res = JSON.parse(body)
    console.log(res)
  }
});
