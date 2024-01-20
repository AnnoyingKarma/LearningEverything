const car = {
    company: "Tata",
    name: "Altroz",
    color: "blue"
}
// converts into string
const newCar = JSON.stringify(car);

console.log(newCar);

// use backticks `{...}` not ' '
const car1 = `{
    "company": "Tata",
    "name": "Altroz",
    "color": "midnightGrey"
}`;

const newCar1 = JSON.parse(car1);

console.log(newCar1);