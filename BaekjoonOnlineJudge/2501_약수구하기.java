class Main{
    public static void main(String[] args) {
        int[] ans=new int[10000];
    	int t=0, i=0;
    	java.util.Scanner s=new java.util.Scanner(System.in);
        int n=s.nextInt();
        int k=s.nextInt();
        s.close();
    	while(t<n/2) {
    		if (n%++t == 0)
    			ans[i++] = t;
    	}
    	ans[i] = n;
    	System.out.println(ans[k-1]);
    }
}