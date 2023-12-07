import scala.util.Random

class Manager(name: String, surname: String)
  extends Human(name, surname) {
  def rewardForStudents(studentGroup: StudentGroup, teacher: Teacher, office: Office): Unit = {
    studentGroup.students.foreach(student => {
      student.grade match {
        case 5 => student.balance = teacher.price * 1.1
          student.diff = student.balance - teacher.price
          println(s"Student ${student.name} ${student.surname} from group ${student.group} has reward ${student.balance}. " +
            s" This Student can buy one more course and he also has ${student.diff}.")
            student.tokensToSell = Random.between(0, student.balance)
        case 4 => student.balance = teacher.price * 1
          student.diff = student.balance - teacher.price
          println(s"Student ${student.name} ${student.surname} from group ${student.group} has reward ${student.balance}. " +
            s" This Student can buy one more course.")
        case 3 => student.balance = teacher.price * 0.9
          student.mustPay = teacher.price - student.balance
          println(s"Student ${student.name} ${student.surname} from group ${student.group} has reward ${student.balance}." +
            s" This Student has to pay ${student.mustPay} for one more course.")
        case 2 => student.balance = teacher.price * 0.8
          student.mustPay = teacher.price - student.balance
          println(s"Student ${student.name} ${student.surname} from group ${student.group} has reward ${student.balance}." +
            s" This Student has to pay ${student.mustPay} for one more course.")
        case 1 => student.balance = teacher.price * 0.7
          student.mustPay = teacher.price - student.balance
          println(s"Student ${student.name} ${student.surname} from group ${student.group} has reward ${student.balance}." +
            s" This Student has to pay ${student.mustPay} for one more course.")
      }
      student.tokensToSell = Random.between(0, student.balance)
      office.soldTokens += student.tokensToSell
      student.balance -= student.tokensToSell
    })
  }
  def question(studentGroup: StudentGroup, teacher: Teacher, office: Office): Unit = {
    studentGroup.students.foreach(student => {
      println(s"${student.name} ${student.surname}, do you want to buy one more course?")
      student.answer1 = Random.between(0, 2)
      student.answer2 = Random.between(0, 2)
      student.answer1 match {
        case 0 => println(s"Yes? ${student.name} ${student.surname}, to continue studying you need ${student.mustPay} tokens. Do you have ${student.mustPay} tokens?")
          student.answer2 match {
            case 0 => if (student.balance >= teacher.price) {
              println(s"${student.name} ${student.surname}, thanks! Good luck in your studies!")
              student.balance -= teacher.price
              if (office.tokenPrice <= 0.5) {
                student.tokensToBuy = Random.between(student.mustPay, 1500)
                } else {
                student.tokensToBuy = student.mustPay
              }
              office.boughtTokens += student.tokensToBuy
              student.balance += student.tokensToBuy
            } else {
              student.tokensToBuy = teacher.price - student.balance
              println(s"${student.name} ${student.surname}, not enough funds to pay for the course. Go to the market and buy tokens.")
              student.balance += student.tokensToBuy
              student.balance -= teacher.price
              office.boughtTokens += student.tokensToBuy
              println(s"${student.name} ${student.surname} has enough tokens and continue studing.")
            }
            case 1 => println(s"To continue studying, buy ${student.mustPay} tokens")
              student.balance += student.mustPay
              if (student.balance >= teacher.price) {
                println(s"${student.name} ${student.surname}, thanks! Good luck in your studies!")
                student.balance -= teacher.price
              } else {
                if (office.tokenPrice <= 0.5) {
                  student.tokensToBuy = Random.between(student.mustPay, 1500)
                } else {
                  student.tokensToBuy = teacher.price - student.balance
                }
                println(s"${student.name} ${student.surname}, not enough tokens to pay for the course. Go to the market and buy tokens.")
                student.balance += student.tokensToBuy
                student.balance -= teacher.price
                office.boughtTokens += student.tokensToBuy
                println(s"${student.name} ${student.surname} has enough tokens and continue studing.")
              }
          }
        case 1 => println("No? Ok, it is your choice. Bye!")
          student.tokensToBuy = Random.between(100, 1500)
          office.boughtTokens += student.tokensToBuy
          student.balance += student.tokensToBuy
          studentGroup.removeStudent(student)
      }
    })
  }
}