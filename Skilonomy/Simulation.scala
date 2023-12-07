object Simulation {
  def main(args: Array[String]): Unit = {
    val student1 = new Student("Vladyslav", "Petukhov", 241, 0, 0, 0, 0, 0, 0, 0, 0)
    val student2 = new Student("Ivan", "Ivanov", 232, 0, 0, 0, 0, 0, 0, 0, 0)
    val student3 = new Student("Oleg", "Petrov", 261, 0, 0, 0, 0, 0, 0, 0, 0)
    val teacher = new Teacher("Olena", "Pavlova", 1000, 0, 0, 0)
    val manager = new Manager("Dmytro", "Shevchenko")
    val studentGroup = new StudentGroup
    val office = new Office
    var month: Int = 1

    studentGroup.addStudent(student1)
    studentGroup.addStudent(student2)
    studentGroup.addStudent(student3)
    while(month <= 5 && studentGroup.students.nonEmpty){
      println(s"Month ${month}")
      teacher.score(studentGroup)
      manager.rewardForStudents(studentGroup, teacher, office)
      office.calculateTeacherSalary(teacher, studentGroup)
      manager.question(studentGroup, teacher, office)
      office.updateTokens(teacher)
      office.soldTokens = 0
      office.boughtTokens = 0
      studentGroup.printStudentsRemaining()
      month += 1;
      println("==========================================================================================")
    }
  }
}