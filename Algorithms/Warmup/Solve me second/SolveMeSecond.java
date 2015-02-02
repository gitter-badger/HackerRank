import java.util.Scanner;
public class SolveMeSecond{
	static int sum(int a, int b){
		return (a + b);
	}

	public static void main(String[] args){
		int T, i, num1, num2;
		Scanner in = new Scanner(System.in);

		T = in.nextInt();
		for(i = 0; i < T; i++){
			num1 = in.nextInt();
			num2 = in.nextInt();
			System.out.println(sum(num1, num2));
		}

	}
}