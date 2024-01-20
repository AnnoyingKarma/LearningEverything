let d = new Date();
const start = performance.now();


for(let i=0; i<1000000000; i++);

const end = performance.now();

console.log("Starting Time : "+start);
console.log("Ending Time : "+end);

console.log("Time taken in between : " + (end-start));