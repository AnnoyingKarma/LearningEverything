let one = new Date();
const first = one.getTime();

for(let i =0; i<100000000; i++);

let two = new Date();
const second = two.getTime();
console.log(second-first);