import scala.util.Random

class Teacher(name: String, surname: String, var price: Double, var salary: Double, var balance: Double, var tokensToSell: Double)
  extends Human(name, surname) {

  def score(studentGroup: StudentGroup): Unit = {
    studentGroup.students.foreach(student => {
      student.grade = Random.between(1, 6)
      println(s"${student.name} ${student.surname} from group ${student.group} has ${student.grade}.")
    })
  }
}