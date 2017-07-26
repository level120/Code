import java.math.BigDecimal;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		BigDecimal a = new BigDecimal(s.next());
		BigDecimal c = new BigDecimal(s.next());

		System.out.println(a.add(c));
		s.close();
	}

}
