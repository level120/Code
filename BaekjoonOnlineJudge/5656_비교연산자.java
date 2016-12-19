class Main{
    public static void main(String[] args) {
        java.util.Scanner s=new java.util.Scanner(System.in);
		int ans=0;
		String[] a={"false","true"};
		while(true) {
			int n1=s.nextInt();
			String c=s.next();
			int n2=s.nextInt();
			if(c.equals("E"))    break;
			if(c.equals(">"))    System.out.printf("Case %d: %s\n",++ans,a[n1>n2?1:0]);
			if(c.equals(">="))   System.out.printf("Case %d: %s\n",++ans,a[n1>=n2?1:0]);
			if(c.equals("<"))    System.out.printf("Case %d: %s\n",++ans,a[n1<n2?1:0]);
			if(c.equals("<="))   System.out.printf("Case %d: %s\n",++ans,a[n1<=n2?1:0]);
			if(c.equals("=="))   System.out.printf("Case %d: %s\n",++ans,a[n1==n2?1:0]);
			if(c.equals("!="))   System.out.printf("Case %d: %s\n",++ans,a[n1!=n2?1:0]);
		}
		s.close();
    }
}