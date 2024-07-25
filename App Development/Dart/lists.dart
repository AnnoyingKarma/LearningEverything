void main() {
  List<Student> student = [
    Student("Rich", 10),
    Student("Lim", 20),
    Student("Tiss", 18),
  ];
  student.add(Student("Zach", 21));
  student.insert(1, Student("Rick", 25));
  student.remove(student[4]);

  for (Student s in student) {
    print(s);
  }

  //.where
  List<Student> newStudent = student.where((stu) => stu.marks > 10).toList();
  print(newStudent);
  //reverse
  newStudent = newStudent.reversed.toList();
  print(newStudent);
  Student check = student[0];

  //contains
  print(student.contains(check));
  //first and lastwhere
  print(student.firstWhere((stu) => stu.marks == 25));
  print(student.lastWhere((stu) => stu.marks == 10));

  print(student);
}

class Student {
  String name;
  int marks;

  Student(this.name, this.marks);

  @override
  String toString() {
    return ("Student: $name  --  Marks: $marks");
  }
}
