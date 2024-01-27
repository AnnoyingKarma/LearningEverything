let isOpen = true;

let grab = () => {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      resolve(console.log("Done with this"));
    }, 4000);
  });
};

async function getCash() {
  console.log(1);
  console.log(2);
  console.log(3);
  await grab();
  console.log(4);
  console.log(5);
  console.log(6);
}
console.log("Random1");
console.log("Random2");
console.log("Random3");

getCash();
