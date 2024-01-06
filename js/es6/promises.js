// A Promise is a JavaScript object that links "Producing Code" and "Consuming Code".
// "Producing Code" can take some time and "Consuming Code" must wait for the result.

const myPromise = new Promise(function (myResolve, myReject) {
  setTimeout(function () { myResolve('I love you!!'); }, 3000);
});

myPromise.then(function (value) {
  console.log(value);
});

const x = new Promise((resolve, reject) => {
  setTimeout(() => resolve('done'), 1000);
});

x.then(
  result => console.log(result),
  error => console.log(error)
);

const y = new Promise((resolve, reject) => {
  setTimeout(() => reject(new Error('Whoops')), 500);
});

// you can use .catch(f) to handle errors
y.catch(console.error);
// or use promise.then(null, f), the work the same
y.then(
  result => console.log(result),
  error => console.error(error)
);
