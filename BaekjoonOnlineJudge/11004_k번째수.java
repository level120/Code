import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer s = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(s.nextToken());
		int K = Integer.parseInt(s.nextToken());
		s = new StringTokenizer(br.readLine());
		int O[] = new int[N];
		for(int i=0; i<N; i++) {
			O[i] = Integer.parseInt(s.nextToken());
		}
		br.close();
		Arrays.sort(O);
		System.out.println(O[K-1]);
	}
}