#!/usr/bin/node

const size = 8;
let board = '';

// Rows of the chess board
for (let i = 0; i < size; i++) {
  // Columns of the chess board
  for (let j = 0; j < size; j++) {
    if ((i + j) % 2 == 0) { board += ' '; } else { board += '#'; }
  }

  if ((size - i) != 1) { board += '\n'; }
}

console.log(board);
