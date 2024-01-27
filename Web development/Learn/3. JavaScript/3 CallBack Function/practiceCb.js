// addition subtraction multiplication division

function addition(a,b){
    console.log(a+b);
}
function subtraction(a,b){
    console.log(a-b);
}
function multiplication(a,b){
    console.log(a*b);
}
function division(a,b){
    console.log(a/b);
}

function calc(a,b,cb){
    cb(a,b);
}

calc(100,20,addition);
calc(100,20,subtraction);
calc(100,20,multiplication);
calc(100,20,division);