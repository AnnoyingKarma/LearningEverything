let canvas = document.querySelector("canvas");
console.log(canvas);

let c = canvas.getContext("2d");

canvas.height = window.innerHeight;
canvas.width = window.innerWidth;

for (let i = 0; i < 10; i++) {
  let x = Math.random() * window.innerWidth;
  let y = Math.random() * window.innerHeight;
  c.strokeStyle = "rgba(255,0,0)";
  c.font = "40px Arial";
  c.strokeText("<code/>", x, y);
}