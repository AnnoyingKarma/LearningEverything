void main(){
  
  Dog dogOne=Dog();
  dogOne.sound();

}

abstract class Animal{
  void sound(){
    print("Animal Sound");
  }
}

class Dog extends Animal{
  @override
  void sound(){
    print("Bark");
  }
}

class Cat implements Animal{
  @override
  void sound(){
    print("Meow");
  }
}