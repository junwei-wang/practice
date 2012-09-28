package recfun
import common._

object Main {
  def main(args: Array[String]) {
    println("Pascal's Triangle")
    for (row <- 0 to 10) {
      for (col <- 0 to row)
        print(pascal(col, row) + " ")
      println()
    }
  }

  /**
   * Exercise 1
   */
  def pascal(c: Int, r: Int): Int =
    if (c == 0 || c == r || r == 0) 1 else pascal(c - 1, r - 1) + pascal(c, r - 1)

  /**
   * Exercise 2
   */
  def balance(chars: List[Char]): Boolean = {
    def isCharsEmpty(charArr: List[Char]) = charArr.isEmpty
    def isLeft(charArr: List[Char]) = (charArr.head == '(')
    def isRight(charArr: List[Char]) = (charArr.head == ')')

    def hasLeftParentethesesIgnore(n: Int, charArr: List[Char]): Boolean = {
      if (isCharsEmpty(charArr)) n == 0
      else if (!isLeft(charArr) && !isRight(charArr)) hasLeftParentethesesIgnore(n, charArr.tail)
      else if (isLeft(charArr)) hasLeftParentethesesIgnore(n + 1, charArr.tail)
      else if (isRight(charArr) && n > 0) hasLeftParentethesesIgnore(n - 1, charArr.tail)
      else false
    }

    hasLeftParentethesesIgnore(0, chars)
  }

  /**
   * Exercise 3
   */
  def countChange(money: Int, coins: List[Int]): Int = {
    def count(someMoney: Int, coinsArr: List[Int]): Int = {
      if (coinsArr.isEmpty || someMoney < 0) 0
      else if (someMoney == 0) 1
      else count(someMoney - coinsArr.head, coinsArr) + count(someMoney, coinsArr.tail)
    }

    count(money, coins.sortWith((a, b) => a > b))
  }
}
