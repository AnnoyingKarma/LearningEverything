const userName = "Rick";
const userSubordinate = "Morty";
// template literals
const userDog = `Snuffles`;

console.log(userName);
console.log(userSubordinate);
console.log(userDog);

// Can embed js inside template literal
console.log(`The name of the user is ${userName}`);
console.log("Name of Subordinate is " + userSubordinate);

// can concatinate and put it in variable
let fullDetailConcat =
    "Name of the user is " +
    userName +
    ". Name of the subordinate is " +
    userSubordinate;
let fullDetailTempLit = `Name of the user is ${userName}. Name of the subordinate is ${userSubordinate}.`;
console.log(fullDetailConcat);
console.log(fullDetailTempLit);

// multiline strings
// for simple concatinate we can use /n
let multiLine = `How are you feeling 
good? or Not, 
${userName}`;
console.log(multiLine);

// if we want to quote something we can use escape sequence

