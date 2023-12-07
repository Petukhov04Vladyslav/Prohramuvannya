import scala.util.Random

class Office(var boughtTokens: Double = 0, var soldTokens: Double = 0, var allTokens: Double = 100000,
             var tokenPrice: Double = 0) {

  def calculateTeacherSalary(teacher: Teacher, studentGroup: StudentGroup): Unit = {
    teacher.salary = studentGroup.students.length * teacher.price
    teacher.balance += teacher.salary
    println(s"Teacher's salary: ${teacher.salary}\nTeacher's balance: ${teacher.balance}")
  }

  def updateTokens(teacher: Teacher): Unit = {
    teacher.tokensToSell = Random.between(0, teacher.balance)
    teacher.balance -= teacher.tokensToSell
    soldTokens += teacher.tokensToSell
    allTokens += soldTokens
    allTokens -= boughtTokens
    tokenPrice = boughtTokens / soldTokens
    println(s"Sold tokens: ${soldTokens}\nBought tokens: ${boughtTokens}\nAll tokens: ${allTokens}\nToken price: ${tokenPrice}")
  }
}