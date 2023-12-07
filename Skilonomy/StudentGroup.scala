class StudentGroup(var students: List[Student] = List()) {

  def addStudent(student: Student): Unit = {
    students = student :: students
  }

  def removeStudent(student: Student): Unit = {
    students = students.filterNot(_ == student)
  }

  def printStudentsRemaining(): Unit = {
    if (students.nonEmpty){
      println("Students remaining in the group:")
      students.foreach(student => student.showStudent())
    } else {
      println("Students remaining in the group: 0")
    }
  }
}