let arr = ["Hello", "Hey", 1177, true, "@", false];

console.log(arr.find(a => a==='@'));

let result = arr.find( (x)=>x===1000+177 );

console.log(result);


let indx =  arr.findIndex( (z)=>z===false );

console.log(indx);


// includes function returns if the value if present or not in form of true and false

console.log( arr.includes("Hey"));