/*
    Object.keys()
    Object.values()
    Object.entries()
    Object.hasOwnProperty()
    Object.assign()
*/

let obj1= {
    color: "Grey",
    rank: 8,
    difficulty: "mid"
}

// printing object
console.log(obj1);

// only returns the keys
console.log(Object.keys(obj1));

// only returns the values
console.log(Object.values(obj1));

// returns array of object?
console.log(Object.entries(obj1));

// returns boolean if the object has that property or not
console.log(obj1.hasOwnProperty('color'));
console.log(obj1.hasOwnProperty('name'));

//  merges two objects i think?
console.log(Object.assign(obj1,{a:1, b:2, c: 3}));