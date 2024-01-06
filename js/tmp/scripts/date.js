#!/usr/bin/node

console.log(new Date());
console.log(new Date(2000, 9, 3));
console.log(new Date(2001, 02, 22));
console.log(new Date().getTime());

function get_date(string)
{
	let [_, day, month, year] = /(\d{1,2})-(\d{1,2})-(\d{4})/.exec(string);

	return new Date(year, month - 1, day);
}

console.log(get_date("22-03-2001"));

console.log("baby".replace("y", "e"));
console.log(
"Liskov, Barbara\nMcCarthy, John\nWadler, Philip"
	.replace(/(\w+), (\w+)/g, "$2 $1"));
