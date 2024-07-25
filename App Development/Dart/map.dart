void main() {
  Map<int, String> animals = {
    1: "Dog",
    2: "Tiger",
    3: "Lion",
  };

  animals.addAll({
    4: "Cat",
    5: "Cow",
    6: "Crow",
    7: "Donkey",
  });

  animals[8] = "Horse";

  for (int i = 0; i < animals.length; ++i) {
    print("${animals.keys.toList()[i]} : ${animals.values.toList()[i]}");
  }

  animals.remove(/*key?*/ 8);

  animals.forEach((key, value) {
    print("$key  --:--  $value");
  });
  print(animals);
}
