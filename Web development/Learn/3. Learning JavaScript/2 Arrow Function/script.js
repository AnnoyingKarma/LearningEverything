let power = (val, exp) => {
  let power = val;
  for (let i = 1; i < exp; i++) {
    power *= val;
  }
  console.log(power);
};

console.log(power(5, 2));

const add = (sum) => sum+sum;

console.log(add(123));
