//wake up, get ready , go to work
const wakeUp = true;
const getReady=true;
const goWork= true;
function wake(){
    return new Promise((resolve, reject)=> {
        setTimeout(() => {
            if(wakeUp==true) resolve("I waked up.")
            else reject("Still Sleeping.")
        }, 1000);
    })
}
function beReady(){
    return new Promise((resolve, reject)=> {
        setTimeout(() => {
            if(getReady==true) resolve("Ready already, Let's go.")
            else reject("Ain't ready yet.")
        }, 3000);
    })
}
function goToWork(){
    return new Promise((resolve, reject)=> {
        setTimeout(() => {
            if(goWork==true) resolve("Let's roll all day.")
            else reject("To lazy to go to work.")
        }, 2000);
    })
}

wake().then(value=>{console.log(value); return beReady().then(value=>{console.log(value); return goToWork().then(value=>{console.log(value); console.log("You did everything. 🫡")})})}).catch(error=>console.error("ERROR"));

wake().then(val=>{console.log(val); return beReady()}).then(val=>{console.log(val); return goToWork()}).then(val=>{console.log(val); console.log("You managed to pull of everything.");}).catch(error=>console.error("ERROR"));