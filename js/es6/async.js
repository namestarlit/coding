// async functions always returns a promise
async function f() {
  return 1;
}

f().then(console.log);

// The keyword 'await' makes js wait until a promise
// is settled and returns its result/return value
async function f2() {
  const promise = new Promise((resolve, reject) => {
    setTimeout(() => resolve('done!'), 1000);
  });

  const result = await promise;  // wait until the promise resolves
  console.log(result);
}

f2();
