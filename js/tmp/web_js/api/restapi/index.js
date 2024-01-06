#!/usr/bin/node
// Simple Express.js RESTful API
'use strict';

// initialize
const port = 8888;
const express = require('express');
const app = express();

// Allow Cross-orgin Resource Sharing (CORS)
app.use((req, res, next) => {
  res.append('Access-Control-Allow-Origin', '*');
  next();
});

// /hello/ GET request
app.get('/hello/:name?', (req, res) =>
  res.json(
    { message: `Hello ${req.params.name || 'world'}!` }
  )
);

// Start server
app.listen(port, () =>
  console.log(`Server started on port ${port}`)
);
