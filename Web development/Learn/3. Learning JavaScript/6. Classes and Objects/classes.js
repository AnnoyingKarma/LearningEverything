class Products {
    constructor(name,price,mfd,expire){
        this.name=name;
        this.price=price;
        this.mfd=mfd;
        this.expire=expire;
    }
    static logProduct(){
        console.log("Products \n⬇️⬇️⬇️⬇️⬇️⬇️⬇️");
    }
    displayContent(){
        console.log(`${this.name} -> Price is : ₹${this.price}, Manufacture date is : ${this.mfd}, Best before ${this.expire} months`);
    }
}

let product1 = new Products("Chips",10,"01-24",12);
let product2 = new Products("Cheetos",20,"11-23",16);

Products.logProduct();
product1.displayContent();
product2.displayContent();