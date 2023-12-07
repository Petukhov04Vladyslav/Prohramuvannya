class Student(name: String, surname: String, val group: Int, var grade: Int = 0, var balance: Double, var diff: Double,
              var mustPay: Double, var answer1: Int, var answer2: Int, var tokensToSell: Double, var tokensToBuy: Double)
  extends Human(name, surname) {
  def showStudent(): Unit = {
    println(s"Name: ${name}\nSurname: ${surname}\nGroup: ${group}\nBalance: ${balance}")
  }
}