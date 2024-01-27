function sumOfSquare(n){
    return n**2;
}
function sumOfCube(n){
    return n**3;
}
function calcSum(a,b,fn){
    console.log(fn(a)+fn(b));
}

calcSum(2,3,sumOfCube);

// can also do like this

function calculateSum(a,b){
    console.log(sumOfSquare(a)+sumOfSquare(b));
}

calculateSum(2,3);