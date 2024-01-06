#!/usr/bin/node

/**
 * phi - computes phi coefficient to get correletation
 */
function phi (table) {
  return (table[3] * table[0] - table[2] * table[1]) /
		Math.sqrt(
		  (table[2] + table[3]) *
			(table[0] + table[1]) *
			(table[1] + table[3]) *
			(table[0] + table[2]));
}

console.log(phi([76, 9, 4, 1]));
