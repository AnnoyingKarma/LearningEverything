// .length | tells the length of the data provided
console.log("Length of the Name is " + "Tryler".length);
function lengthOf(firstName) {
  console.log("Length of the name is " + firstName.length);
}
lengthOf("Dholu");

//------------------------------------------------------------------------------------//

// .indexOf(searchValue, start)
let landAnimals = "Rabbit Tiger Elephant Rabbit Dog Rhyno Rabbit";
console.log("Index is : " + landAnimals.indexOf("Rabbit"));
console.log("Index is : " + landAnimals.indexOf("Rabbit", 1));
// .lastIndexOf(searchValue)
console.log("Index is : " + landAnimals.lastIndexOf("Rabbit"));

let airAnimals = ["Sparrow", "Crow", "Eagle", "Falcon", "Hawk", "Vulture"];
function getIndexOf(array, target) {
  console.log("Index is : " + array.indexOf(target));
}
getIndexOf(airAnimals, "Falcon");

//------------------------------------------------------------------------------------//

// .slice(startIndex, lastIndex) to slice an object and remove unwanted part
console.log("What so ever bro".slice(13));
console.log("Alright, Will see".slice(0, 7));

// .substr(startIndex, length) both are pretty similar slice and substr
console.log("JavaScript Html Css".substr(4, 6));
console.log("JavaScript Html Css".substr(11));

//------------------------------------------------------------------------------------//

// .replace(target, replacement) replaces the object with replacement thing | its not switch
console.log("Going To the End".replace("Go", "Roll"));

//------------------------------------------------------------------------------------//

// .split(seperator) splits the thing into pieces // .split(seperator, limit)
console.log("Hello, I am under the water".split(" "));
console.log("Hello>I>am>under>the>water".split(">"));
let hello = console.log("Mera paisa kidhar hai".split(" ", 2));

//------------------------------------------------------------------------------------//

// .trim() removes the unwanted gaps in front and at end of the text
console.log(
  "             Ankhoo me nami thi vitamin ki kami thi                ".trim()
);

//------------------------------------------------------------------------------------//

// .toUpperCase() .toLowerCase
console.log("To do list".toUpperCase());
console.log("Lower The Elements".toLowerCase());

//------------------------------------------------------------------------------------//

// parseInt -> converts into int | parseFloat() -> converts into float
console.log(parseInt("47.88899"));
console.log(parseFloat("232.4232fdakfj"));
console.log(parseFloat("23%"));

//------------------------------------------------------------------------------------//

// push() | unshift() && pop() | shift()
let arr = [1, 2, 3, 4];
console.log("Normal array -> " + arr);
arr.push(9);
console.log("Pushed an element -> " + arr);
arr.pop();
console.log("Poped the element -> " + arr);
arr.unshift(100);
console.log("Added element to front -> " + arr);
arr.shift();
console.log("Deleted element from front -> " + arr);

//------------------------------------------------------------------------------------//

// .concat(arrayname) adding two arrays together
let arr1 = [10, 20, 30, 40];
let arr2 = [100, 90, 80, 70];
console.log(arr1.concat(arr2));

//------------------------------------------------------------------------------------//

// .forEach() will call each element seperately
let nums1 = [6, 5, 4, 1, 2, 1, 3];
let sum = 0;
nums1.forEach(sumOfnums1);
function sumOfnums1(nums1) {
  sum += nums1;
}
console.log(sum);
