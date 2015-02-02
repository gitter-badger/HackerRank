import java.util.Scanner;
import java.util.ArrayList;

public class LonelyInteger{
	public static int lonely_integer(ArrayList<Integer> arr, int array_size){
		int res = 0;
		int i;
		for(i = 0; i < array_size; i++){
			res = res ^ arr.get(i);
		}
		return res;
	}


	public static void main(String[] args){
		
		ArrayList<Integer> arr = new ArrayList<Integer>();
		int array_size;
		int i, result;
		
		Scanner in = new Scanner(System.in);
		array_size = in.nextInt();

		for(i = 0; i < array_size; i++){
			arr.add(in.nextInt());
		}

		result = lonely_integer(arr, array_size);
		System.out.print(result);


	}
}