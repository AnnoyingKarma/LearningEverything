let arr = ["Hello", "Hey", 1177, true, "@", false];

arr.forEach((val) => {
  if (val == "Hello") console.log("Alright");
  else console.log(val);
});

console.log("\n");

arr.forEach((val)=>{
    console.log(val);
});

console.log("\n");

function printing (x){
    console.log(x);
}
arr.forEach(printing);