class Main{
    public static void main(String[] args) {
        java.util.Scanner s = new java.util.Scanner(System.in);
        long[] tmp = new long[100];
    	int n = s.nextInt();
    	tmp[0] = 1L;	tmp[1] = 1L;
    	for (int i = 2; i <= n; i++)
    		tmp[i] = tmp[i - 2] + tmp[i - 1];
    	System.out.println(tmp[n - 1]);
    }
}