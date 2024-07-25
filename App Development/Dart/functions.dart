void main(){
  var func = printing();
  func();
  checkStatus();
}

Function printing(){
  return (){
    print("Is he online?");
  };
}

// anonymous function
void checkStatus () => print("Offline");