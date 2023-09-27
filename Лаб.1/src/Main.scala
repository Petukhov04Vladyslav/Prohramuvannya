object Main {
  def main(args: Array[String]): Unit = {
    var list1: List[Int] = List(8, 23, 11, 5, 1, 4, 9);
    FindMinMaxIf(list1);
  }

  def FindMinMaxIf(list: List[Int]): Unit = {
      if (list.nonEmpty) {
      var sortedRes: List[Int] = list.sorted;
      println("Min: " + sortedRes.head);
      println("Max: " + sortedRes.last);
    }
  }
}