import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int a = s.nextInt();
		int b = s.nextInt();
		s.close();
		
		ArrayList<String> ans = new ArrayList<>();
		ans.add(new String("" + n));
		
		for (int i=1; i<b; i++) {
			int[] cnt = new int[100];
			String tmp = ans.get(i-1);
			String[] str = tmp.split(" ");
			
			for (int j=0; j<str.length; j++) {
				cnt[Integer.parseInt(str[j])]++;
			}
			
			String data = new String();
			for (int j=0; j<cnt.length; j++) {
				if (cnt[j] != 0)
					data += j + " " + cnt[j] + " ";
			}
			ans.add(data);
		}
		
		for (int i=a-1; i<b; i++) {
			System.out.println(ans.get(i));
		}
	}

}