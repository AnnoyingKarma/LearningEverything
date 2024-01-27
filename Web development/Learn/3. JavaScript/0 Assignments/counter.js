// make a counter to count from 20 to 0

 let i=20;
// function counter(){
//     console.log(i--);
//     if(i<0) clearInterval(interval);
// }
// let interval = setInterval(counter,1*1000);


let gap = setInterval(() => {
        console.log(i--);
        if(i<0) clearInterval(gap);
    }, 1000);

