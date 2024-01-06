#!/usr/bin/node

function count_char (str, char_arg) {
  let count = 0;

  for (let i = 0; i < str.length; i++) {
    if (str[i] === char_arg) { count++; }
  }
  return count;
}

console.log(count_char('hello', 'h'));
