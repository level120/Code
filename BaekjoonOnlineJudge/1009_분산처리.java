public class Main {
	public static void main(String[] args) {
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int T = sc.nextInt();
		while(T-->0) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			int result = 1;
			if(a%10 == 0)	System.out.println("10");
			else {
				for(int i=0; i<b; i++) {
					result = (result*a)%10;
				}
				System.out.println(result);
			}
		}
	}
}