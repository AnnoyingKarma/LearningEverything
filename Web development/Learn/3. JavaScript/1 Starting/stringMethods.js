//accessing character in string
let cName = "Bharat";
console.log(cName[0]);

// acessing the string length
const lengthOfcName = cName.length;
console.log(lengthOfcName);

// check if substring is inside the string
console.log(cName.includes("ara"));

// check if string starts or ends with any substring
console.log(cName.startsWith("Bhi"));
console.log(cName.endsWith("at"));

//to get index of a substring in string
//can provide second index --> where to start search from
console.log(cName.indexOf("arat"));
console.log(cName.indexOf("a", 3));
console.log(cName.indexOf("z"));

//slice -> we can provide 2 index it will start from first parameter and will stop at second parameter - 1
console.log(cName.slice(0, 2));
console.log(cName.slice(2)); // it will go till end if we don't provide second parameter

//change cases
console.log(cName.toLowerCase());
console.log(cName.toUpperCase());

//replace() =>  replace substring
let greeting = "Namaste, Aap kese ho";
console.log(greeting);
console.log(greeting.replace("Namaste", "Namaskar"));
console.log(cName.replace("Bharat", "BHARAT"));

//replaceAll() => to replace every same substring
console.log(greeting.replaceAll("e", "E"));