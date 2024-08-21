void main(){

  Car carOne = Car("FourWheeler","Medium","Harrier");
  print(carOne);
  Bike bikeOne = Bike("TwoWheeler","Low","Splender");  
  print(bikeOne);

}


class Company{

  void companyStarted(){
    print("--Starting Company--");
  }
}

class Vehicles extends Company{

  String type;
  String enginePower;

  Vehicles(String this.type, String this.enginePower){
    print("Vehicles constructor called");
  }

}

class Bike extends Vehicles{

  String bikeName;

  Bike(String type,String enginePower,this.bikeName): super(type,enginePower){
    print("\nBike constructor called : ");
    print("${this.type}\n${this.enginePower}\n${this.bikeName}\n");
  }
}

class Car extends Vehicles{

  String carName;

  Car(String type,String enginePower,this.carName): super(type,enginePower){
    print("\nCar constructor called : ");
    print("${this.type}\n${this.enginePower}\n${this.carName}\n"); 
  } 
   
}