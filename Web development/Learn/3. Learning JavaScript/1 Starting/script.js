let a = 100;
let b = 134;
let name = "Ram";

console.log("Sum of a and b is ", a + b);

const constantVal = 33;
console.log("Constant Value = ", constantVal);
console.log("Name = ", name);
console.log("Type is ", typeof constantVal);

let c = 11;
c = String(c);
console.log(c);
c = Boolean(c);
console.log(c);
c = Number(c);
console.log(c);

function multiplyNum(a, b) {
  return a * b;
}

console.log(multiplyNum(a, b));

function sum(a, b) {
  console.log(a + b);
}

sum(c, c);

let fullName="Ram Krishn";
let isHappy="True";

console.log("Hello "+fullName+", Welcome back");

if(isHappy===true) console.log(fullName + ", Keep Smiling");
else console.log(fullName + ", Be happy");

let ans=0,n=121;
for(let i=1; i<=n; i++)
{
  ans +=i;
}
console.log(ans);

const nums = [2,3,4,5,6,7,2,1,7];
let biggestNum=nums[0];
for(let i=0; i<nums.length; i++)
{
  if(nums[i]%2==0)
  {
    console.log(nums[i] + " -> is EVEN");
  }
  else 
  {
    console.log(nums[i] + " -> is ODD");
  }

  if(biggestNum<nums[i]) biggestNum=nums[i];  
}

console.log("Biggest Number in array is => "+ biggestNum);
