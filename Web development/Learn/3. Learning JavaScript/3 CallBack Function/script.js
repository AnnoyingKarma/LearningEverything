let arr = [1, 2, 3, 4, 5, 6];

const calculate = (a, b, operation) => {
  return operation(a, b);
};

function addition(a, b) {
  return a + b;
}

const result = calculate(arr[5], arr[3], addition);

console.log(result);

const random = (num) => {
  return num > 5;
};

const valChck = arr.find(random);

console.log(valChck);

const getIndx = (val) => {
  return val == 3;
};

const sol = arr.findIndex(getIndx);

console.log(sol);

// Array call back functions
// find()
// findIndex()
// forEeach()
// map()
// filter()
// every()
// some()
