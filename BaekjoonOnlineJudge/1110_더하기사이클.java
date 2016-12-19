public class Main {
	public static void main(String[] args) {
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int T = sc.nextInt();
		int count = 0, tmp1 = T/10, tmp2 = T%10; 
		while(true) {
			count++;
			int result = tmp1 + tmp2;
			tmp1 = tmp2;	tmp2 = result%10;
			if((tmp1*10 + tmp2) == T)	break;
		}
		System.out.println(count);
	}
}