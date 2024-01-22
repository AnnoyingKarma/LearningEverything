// Boil water
// Put sugar and patti
// Put milk
// Serve Chai

function boil(cb){
    setTimeout( ()=> {console.log("Boiling the water."); cb();}, 2500)
}
function putting(cb){
    setTimeout( ()=> {console.log("Putting sugar and patti after the water is boiled."); cb();}, 800)
}
function putMilk(cb){
    setTimeout( ()=> {console.log("Putting milk after sugar and patti is fully desolved."); cb();}, 1000)
}
function serve(cb){
    setTimeout( ()=> {console.log("Serve the chai. ENJOY"); cb();}, 4000)
}
boil( () => {
    putting ( () => {
        putMilk ( () => {
            serve( () => {
                console.log("Everything is done");
            });
        });
    });
});