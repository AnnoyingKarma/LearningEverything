void main(){

  Employee emOne=Employee("Lyn",Roles.cloudDeveloper);
  Employee emTwo=Employee("Mint", Roles.androidDev);
  emOne.printing();
  emTwo.printing();
}

enum Roles{
  webDev(101),
  androidDev(102),
  cyberSecurity(103),
  cloudDeveloper(104);

  final int salary;
  const Roles(this.salary);
}

class Employee{
  String name;
  Roles role;

  Employee(this.name,this.role);

  void printing(){
    print("$name : ${role.salary}");
  }

}