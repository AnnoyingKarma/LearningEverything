void main(){

Cookie cookieFirst=Cookie("Rectangle", 10);


print(cookieFirst);
print(cookieFirst._shape);
print(cookieFirst._size);

cookieFirst.setShape="Circle";
cookieFirst._size=19;
cookieFirst.getShape;
cookieFirst.getSize;

print(Constants.greeting);
print(Constants.leave());

}

class Cookie{

  String _shape;
  int _size;

  Cookie(this._shape, this._size){
  }

  set setShape(String shape){
    _shape=shape;
  }

  set setSize(int size){
    _size=size;
  }

  get getShape => print(_shape);
  get getSize => print(_size);

}

class Constants{
  static String greeting = "WELCOME";
  static int id=102981;

  static String leave(){
    return "Bye";
  }

}

