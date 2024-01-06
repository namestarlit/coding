function displayTime () {
  // Get element with id='clock'
  const clock = document.querySelector('#clock');
  // Get current time
  const now = new Date();

  // Display time in the clock
  clock.textContent = now.toLocaleTimeString();
}

// Display time and update it every second.
displayTime();
setInterval(displayTime, 1000);
