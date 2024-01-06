// create a custom iterable
const customIterable = {
  [Symbol.iterator]() {
    let counter = 0;
    return {
      next() {
        if (counter < 5) {
          counter++;
          return { done: false, value: counter };
        } else {
          return { done: true, value: undefined };
        }
      }
    }
  }
}

// run using the for/of loop
for (const x of customIterable) {
  console.log(x);
}
