let arr = ["Hello", "hey", "what", "Is"];

arr = arr.map((val) => {
  return val + " ok";
});

console.log(arr);

let nums = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];

let cubeNums = nums.map(cubeCal);

console.log(cubeNums);

function cubeCal(a) {
  return a ** 3;
}