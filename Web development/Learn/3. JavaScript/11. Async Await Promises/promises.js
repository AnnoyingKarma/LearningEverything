let stocks = {
  Fruits: ["apple", "banana", "orange", "grape"],
  Liquid: ["water", "ice"],
  Holder: ["cone", "cup", "stick"],
  Topping: ["choclate", "dryFruits"],
};

let isShopOpen=true;

let order = (time, work) => {
    return new Promise((resolve,reject)=>{
        if(isShopOpen){
            setTimeout(() => {
                resolve(work() )
            }, time);
            
        }
        else{
            reject(console.log("Our Shop is closed"));
        }
    })
}

order(2000, ()=>console.log(`${stocks["Fruits"][0]} was selected`))

.then(()=>{
    return order(0, ()=> console.log("Production has started"));
})

.then(()=>{
    return order(2000, ()=>console.log("Cutting the fruits."))
})
.then(()=>{
    return order(1000,()=>console.log(`Adding ${stocks["Liquid"]}`))
})
.then(()=>{
    return order(1000,()=>console.log("Starting the machine."))
})
.then(()=>{
    return order(2000,()=>console.log(`${stocks["Holder"][0]} was selected`))
})
.then(()=>{
    return order(3000,()=>console.log(`You will get topping of ${stocks["Topping"][0]}`))
})
.then(()=>{
    return order(2000,()=> console.log("Serving the IceCream."))
})
.catch(()=>{
    console.log("Customer left.");
})
.finally(()=>{
    console.log("Day ended, Shop is closed.")
})