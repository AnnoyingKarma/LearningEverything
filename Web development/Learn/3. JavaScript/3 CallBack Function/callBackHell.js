let stocks = {
  Fruits: ["apple", "banana", "orange", "grape"],
  Liquid: ["water", "ice"],
  Holder: ["cone", "cup", "stick"],
  Topping: ["choclate", "dryFruits"],
};

let order = (fruitName, cb) => {
  setTimeout(() => {
    console.log(`${stocks["Fruits"][fruitName]} was selected`);
    cb();
  }, 2000);
};

let production = () => {
  setTimeout(() => {
    console.log("Production has started.");

    setTimeout(() => {
      console.log("Chopping the Fruits.");
      setTimeout(() => {
        console.log(
          `${stocks["Liquid"][0]} and ${stocks["Liquid"][1]} was added`
        );
        setTimeout(() => {
          console.log("Machine was started");
          setTimeout(() => {
            console.log(`${stocks["Holder"][1]} was selected.`);
            setTimeout(() => {
              console.log(`${stocks["Topping"][1]} were added.`);
              setTimeout(() => {
                console.log("Serve the ITEM.");
              }, 2000);
            }, 3000);
          }, 2000);
        }, 1000);
      }, 1000);
    }, 2000);
  }, 0);
};

order(3, production);
