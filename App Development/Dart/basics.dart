
//switch statement
void placeAndItempPrice(String destinationPlace,int item){
    switch (destinationPlace){
    case "ABC":
      print ("ABC location -> ${item*10}");
      break;
    case "DDD": 
      print("DDD location -> ${item*15}");
      break;
    case "FFF":
      print("FFF location -> ${item*20}");
      break;
  }
}

//for loop

void printHello(){
  for (int i=0; i<10; ++i){
    print ('Hello');
  }
}

//substring
void substringOfHelloWorld(){
  String greetingToMachine = "Hello World";
  print(greetingToMachine.substring(4, 10));
}

// returning 2 values
(String,int,int,String) nameAndAgeOfThePerson(){
  return("Agastha",10,100,"name");
}

void testingNamedArg({required String name,int? cost, required double weight}){
  print("$name\n$cost\n$weight");
}

void testingBothArg(name,val,{String? nameVal, int? age}){
  print("$name\nval\n$nameVal\n$age");
}

({String name,int age}) valuesForStuff(){
  return (name:"Echo",age:10);
}

void main(){
  
// placeAndItempPrice('ABC', 5);

//  printHello();

// substringOfHelloWorld();

// while and do while loops same as c++

// can return more than 2 datatypes like this (String,int,int,......) functionName(){};
//  print(nameAndAgeOfThePerson());
//  var valueOfnameAndAgeFunc = nameAndAgeOfThePerson();
//  print(valueOfnameAndAgeFunc.$1); // $1 will return first value and $2 second value like this...

// can call runtimetype to get the datatype of it
//  print(valueOfnameAndAgeFunc.$4.runtimeType);

// can also write multiline string using '''  whatever we wanna write'''
// String whateverValue = ''' 
//   Hello,
//     How are you doing?
//     What is going on!
//   Later^
// ''';
// print (whateverValue);

// named arguments in function 
// required is used so you have to give that value
// we don't have to put required for everything we can make a value nullable so we don't have to provide it
// like String? stringName , int? ....
// you can do void funcName({required String name, required int cost, ...}){};
// there will be less errors as we will access this function like this
// funcName(cost: 100, name: "whatever", weight: weight);

// double weight= 10.23;
// the value not provided will give null when printed
// testingNamedArg(name:"Amoha", weight: weight);

// we can also mix positional and named arguments
// testingBothArg("Slk",10, nameVal:"groot",age:1000);

// can get values like this instead of $1, $2, and so on..
// final stuff = valuesForStuff();
// print (stuff.name);
// print (stuff.age);



}