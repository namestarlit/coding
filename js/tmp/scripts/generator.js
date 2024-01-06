#!/usr/bin/node

function * powers (n) {
  for (let current = n; ; current *= n) { yield current; }
}

for (const power of powers(3)) {
  if (power > 30) { break; }

  console.log(power);
}
