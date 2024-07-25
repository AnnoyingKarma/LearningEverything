let sequence = [
    "what",
    100,
    true,
    [10, 2, 3],
    () => {
        return console.log("Printing");
    },
];
// array inside array is known as multidimensional array
sequence[4]();
console.log(sequence[3]);
sequence[0] = "hello";
// you can find index of any element using indexOf
console.log(sequence.indexOf(true));

// push() to add items and pop() to destory last element in array
let newArr = [1, 2, 3, "one", "two", "three"];
newArr.push(true);
newArr.push(false);
newArr.push("tru");
newArr.push(11);
console.log(newArr);
for (i = 0; i < 4; i++) newArr.pop();
console.log(newArr);

// to add item to start of array unshift() to delte from front use shift()
newArr.unshift(true);
newArr.unshift(false);
newArr.unshift("tru");
newArr.unshift(11);
console.log(newArr);
for (i = 0; i < 4; i++) newArr.shift();
console.log(newArr);

// splice() to remove elements from array // it performs action on the current array
console.log(newArr.splice(2, 2));
// can also use slice()
console.log(newArr.slice(1, 3));
console.log(newArr);

// access every item in aray using => for...of
for (arr of newArr) console.log(arr);

//map() to modify or also do some changes in the array
let nums = [1, 2, 3, 4, 5, 6, 7, 8];
console.log(nums);
nums = nums.map((val) => {
    return (val *= val);
});
console.log(nums);

//filter() => if you want to make new array using previous array, but you only want some specific values
nums = nums.filter((inx) => inx > 10 && inx < 50);
console.log(nums);

//split() => it converts array into string join() converts string into array
let greetArr = ["Welcome", "How", "are", "you", "?"];
let greetStr = "Welcome How are you ?";
console.log(greetStr.split(" "));
console.log(greetArr.join(" "));
// toString() => works same as join()
console.log(greetArr.toString(" "));


// simple exercise to practice
let products = [
    "Underpants:6.99",
    "Socks:5.99",
    "T-shirt:14.99",
    "Trousers:31.99",
    "Shoes:23.99",
];

let productName = [];
let productPrice = [];
let total = 0;
for (product of products) {
    let fiNum = product.indexOf(":");
    productName.push(product.slice(0, fiNum));
    productPrice.push(Number(product.slice(fiNum + 1)));
    total += Number(product.slice(fiNum + 1));
}

console.log(productName);
console.log(productPrice);
console.log(total);
