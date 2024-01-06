#!/usr/bin/node

const journal = [
  {
    day: 'Monday',
    events: ['Work', 'touched tree', 'pizza',
      'running', 'television'],
    squirrel: false
  },
  {
    day: 'Tuesday',
    events: ['Work', 'ice cream', 'couliflower', 'lasagna', 'touched tree',
      'brushed teeth'],
    squirrel: false
  },
  {
    day: 'Saturday',
    events: ['Weekend', 'cycling', 'break', 'peanuts', 'beer'],
    squirrel: true
  }
];

// console.log(journal);
console.log(journal[1].day);
console.log(journal[1].events);
console.log(journal[1].squirrel);

console.log(journal_events(journal));
console.log();
// JSON serialization and Deserialization
const json = JSON.stringify(journal);
console.log(json);
console.log();
const parse_json = JSON.parse(json);
console.log(parse_json);

for (const event of journal_events(journal)) { console.log(event + ':', phi(table_for(event, journal))); }

console.log();

for (const event of journal_events(journal)) {
  const correlation = phi(table_for(event, journal));

  if (correlation > 0.1 || correlation < -0.1) { console.log(event + ':', correlation); }
}

function journal_events (journal) {
  const events = [];

  for (const entry of journal) {
    for (const event of entry.events) {
      if (!events.includes(event)) { events.push(event); }
    }
  }
  return events;
}

function table_for (event, journal) {
  const table = [0, 0, 0, 0];

  for (let i = 0; i < journal.length; i++) {
    const entry = journal[i]; let index = 0;

    if (entry.events.includes(event)) { index += 1; }
    if (entry.squirrel) { index += 2; }

    table[index] += 1;
  }

  return table;
}

function phi (table) {
  return (table[3] * table[0] - table[2] * table[1]) /
		Math.sqrt(
		  (table[2] + table[3]) *
			(table[0] + table[1]) *
			(table[1] + table[3]) *
			(table[0] + table[2]));
}
