// synchronous is simple
// everything will run in a certain way
// will run one after another 

console.log("Hello");
console.log("Second Hello");
console.log("Third Hello");


// Asyncronous 
// It can context switch in between
// It doesn't run one by one

setTimeout(() => {
    console.log("After One Second");} ,1000);
console.log("This will run first");