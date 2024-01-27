let hotelOpen = false;

let time = (ms) => {
  return new Promise((resolve, reject) => {
    if (hotelOpen)setTimeout(resolve, ms);
    else reject(console.log("All Rooms are Booked.😭"));
  });
};

async function booking() {
  try {
    console.log("Welcome to Our Hotel.");
    await time(2000);
    console.log("Booking your room.");
    await time(2000);
    console.log("Preparing your room.");
    await time(1000);
    console.log("Giving Room keys.");
    await time(3000);
    console.log("Enjoy now you can enter you room.");
  } catch (error) {
    console.log("Customer left.");
  } finally {
    ("Hotel is fully Booked.");
  }
}

booking();
