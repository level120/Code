public class Main {
	public static void main(String[] args) {
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int T = sc.nextInt();
		while(T-->0) {
			char[] ch1 = sc.next().toCharArray();
			char[] ch2 = sc.next().toCharArray();
			System.out.print("Distances: ");
			for(int i=0; i<ch1.length; i++) {
				System.out.printf("%d ", (ch1[i] - ch2[i]) <= 0 ? (ch2[i] - ch1[i]) : (ch2[i] - ch1[i]) + 26);
			}
			System.out.println();
		}
	}
}