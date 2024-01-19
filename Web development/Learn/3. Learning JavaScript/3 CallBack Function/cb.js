function add (c,d){
    return c+d;
}

console.log(add(5,2));

function multi(a,b,display){
    let result = a*b;
    display(result);    
}
function displaySol(result){
    console.log(result);
}

multi(4,7, displaySol);