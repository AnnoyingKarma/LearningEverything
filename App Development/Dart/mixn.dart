void main(){
  Character characterOne = Character();

  int speed = characterOne.movementSpeed;  
  print (speed);
  characterOne.movingUp();
  characterOne.movingDown();
  characterOne.movingRight();
  characterOne.movingLeft();
}

mixin Movement{
  int movementSpeed = 15;

  String moveRight="Moving Right";
  String moveLeft="Moving Left";
  String moveUp="Moving Up";
  String moveDown="MoveDown";

}
//use with to get mixin
class Character with Movement{
  void movingRight(){
    print(moveRight);
  }
  void movingLeft(){
    print(moveLeft);
  }
  void movingUp(){
    print(moveUp);
  }
  void movingDown(){
    print(moveDown);
  }
}
