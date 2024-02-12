let canvas = document.querySelector("canvas");

canvas.height = window.innerHeight;
canvas.width = window.innerWidth;

let c = canvas.getContext("2d");

function Rect(x, y, dx, dy, h, w, r, g, b, a) {
  this.x = x;
  this.y = y;
  this.dx = dx;
  this.dy = dy;
  this.h = h;
  this.w = w;
  this.r = r;
  this.g = g;
  this.b = b;
  this.a = a;

  this.draw = function () {
    c.strokeRect(x, y, h, w);
    c.strokeStyle = `rgba(${r},${g},${b},${a})`;
  };
  this.update = function () {
    if (x + h > canvas.width || x < 0) {
      dx = -dx;
    }
    if (y + w > canvas.height || y < 0) {
      dy = -dy;
    }
    x += dx;
    y += dy;

    this.draw();
  };
}

let rectArray = [];

for (let i = 0; i < 70; i++) {
  let dx = Math.random() * 7;
  let dy = Math.random() * 7;
  let h = (Math.random() + 1) * 70;
  let w = (Math.random() + 1) * 70;
  let x = Math.random() * (window.innerWidth - w);
  let y = Math.random() * (window.innerHeight - h);
  let r = Math.random() * 255;
  let g = Math.random() * 255;
  let b = Math.random() * 255;
  let a = Math.random();
  rectArray.push(new Rect(x, y, dx, dy, h, w, r, g, b, a));
}

function animate() {
  requestAnimationFrame(animate);
  c.clearRect(0, 0, canvas.width, canvas.height);
  for (let i = 0; i < rectArray.length; i++) {
    rectArray[i].update();
  }
}

animate();