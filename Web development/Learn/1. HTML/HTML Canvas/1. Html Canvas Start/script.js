let canvas = document.querySelector("canvas");
canvas.width = window.innerWidth;
canvas.height = window.innerHeight;

let c = canvas.getContext("2d");

c.fillStyle = "rgba(85, 212, 76)";
c.fillRect(100, 100, 200, 100);
c.fillStyle = "rgba(100, 12, 56)";
c.fillRect(1100, 100, 200, 100);
c.fillStyle = "rgba(255, 122, 36)";
c.fillRect(600, 500, 200, 100);

c.beginPath();
c.moveTo(500, 600);
c.lineTo(100, 300);
c.strokeStyle = "rgba(20,200,200)";
c.stroke();

c.beginPath();
c.arc(300, 400, 100, 0, Math.PI * 2, true);
c.arc(700, 300, 100, Math.PI * 1, Math.PI * 2, true);
c.strokeStyle = "rgba(255,200,0)";
c.stroke();

for (let i = 0; i < 500; i++) {
  let x = Math.random() * window.innerWidth;
  let y = Math.random() * window.innerHeight;
  let r = Math.random() * 255;
  let g = Math.random() * 255;
  let b = Math.random() * 255;
  let a = Math.random();
  c.beginPath();
  c.arc(x, y, 50, 0, Math.PI * 2);
  c.strokeStyle = `rgba(${r},${g},${b},${a})`;
  c.stroke();
}