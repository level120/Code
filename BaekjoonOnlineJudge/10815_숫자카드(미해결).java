public class Main {
	static class Compare implements java.util.Comparator {
		public int compare(Object n1, Object n2) {
			return Integer.parseInt(n1.toString()) - Integer.parseInt(n2.toString());
		}
	}
	public static void main(String[] args) {
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int T = sc.nextInt();
		java.util.ArrayList<Integer> list = new java.util.ArrayList<Integer>(T);
		for(int i=0; i<T; i++) {
			list.add(Integer.parseInt(sc.next()));
		}
		list.sort(new Compare());
		int N = sc.nextInt();
		for(int i=0; i<N; i++) {
			int s = 0, e = list.size() -1;
			int input = sc.nextInt();
			while(true) {
				if(s > e) {
					System.out.print("0 ");
					break;
				}
				int mid = (s + e) / 2;
				if(list.get(mid).intValue() == input) {
					System.out.print("1 ");
					break;
				}
				else {
					if(list.get(mid).intValue() > input)
						e = mid -1; 
					else	s = mid +1;
				}
			}
		}
	}
}