let bi = BigInt(9999999999999999999999999);
let num = 9;
num++;
console.log(typeof num);
console.log(typeof bi);

//tofixed can be used to set precision
//doesnt work directly on variable have to create new variable
let decimalValue = 12345.6789;
console.log(decimalValue);

console.log(decimalValue.toFixed(2));
decimalValue=decimalValue.toFixed(2);
console.log(decimalValue);

// type conversion
let conversionVal = 47;
conversionVal = String(conversionVal);
console.log(typeof conversionVal);