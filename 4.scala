class Human(val name: String, val second_name: String, val age: Int, val address: Address) {
}


class Address(val country: String, val city: String) {
  def showAddress(): Unit = {
    println(s"Country: $country, City: $city")
  }
}


class Student(name: String, second_name: String, age: Int, val group: Int, address: Address)
  extends Human(name, second_name, age, address) {
  def showStudent(): Unit = {
    println(s"Name: $name, Second name: $second_name, Age: $age, Group: $group\nAddress: ")
    address.showAddress()
  }
}


class Teacher(name: String, second_name: String, age: Int, address: Address, val student: Student)
  extends Human(name, second_name, age, address) {
  def score(student: Student): Unit = {
    println(s"Student ${student.name} ${student.second_name} from ${student.group} group has ${scala.util.Random.nextInt(6).toString}")
  }
}


object Main {
  def main(args: Array[String]): Unit = {
    val address1 = new Address("Ukraine", "Oleshky");
    val address2 = new Address("Ukraine", "Kherson");
    val student1 = new Student("Vladyslav", "Petukhov", 18, 241, address1);
    val student2 = new Student("Vadim", "Ivanov", 19, 291, address2);
    val teacher = new Teacher("Olena", "Pavlivna", 52, address2, student1);
    student1.showStudent()
    student2.showStudent()
    teacher.score(student1)
    teacher.score(student2)
  }
}