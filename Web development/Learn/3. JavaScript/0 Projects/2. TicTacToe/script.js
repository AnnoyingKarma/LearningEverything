const ib = document.querySelectorAll(".iBorder");
const turn = document.querySelector(".turn");
let val = 1;


function letCheck(cName, val) {
    ib.forEach((cName) => {
        cName.addEventListener("click", function () {
            if (cName.textContent == "") {
                if (val % 2 == 0) {
                    cName.textContent = "⭕";
                    turn.textContent = "X's Turn";
                } else {
                    cName.textContent = "❌";
                    turn.textContent = "O's Turn";
                }
                val++;
            }
        });
    });
}

letCheck(ib, val);

const playAgainBtn = document.querySelector(".playAgainBtn");

playAgainBtn.addEventListener("click", function () {
    ib.forEach((ib) => {
        ib.textContent = "";
    });
});
