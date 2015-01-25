import java.util.Scanner;

public class SolveMeFirst{
  static int sum(int a, int b){
    return a + b;
  }

  public static void main(String [] args){
    int num1, num2;
    Scanner in = new Scanner(System.in);
    num1 = in.nextInt();
    num2 = in.nextInt();
    System.out.println(sum(num1, num2));
  }
}
