#!/usr/bin/node

function get_week_day (day_no) {
  day_no--;

  const days = [
    'Moday', 'Tuesday', 'Wednesday',
    'Thursday', 'Friday'
  ];

  if (days[day_no]) {
    return days[day_no];
  } else {
    throw new Error('InvalidDayNumber');
  }
}

try {
  console.log(get_week_day(4));
  console.log(get_week_day(8));
  console.log(get_week_day(1)); // this is not executed
} catch (e) {
  console.error('unknown number of the week.');
  console.error(e.name + ':', e.message);
} finally {
  console.log('Adios!');
}

while (true) {
  try {
    const dir = prompt('Where?'); // ← typo!
    console.log('You chose ', dir);
    break;
  } catch (e) {
    console.log(e.name + ':', e.message);
  }
}
