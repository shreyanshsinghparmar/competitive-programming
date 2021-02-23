import java.util.*;
import java.math.BigInteger;
import java.lang.*;

class Main
{
	static BigInteger fact(int n) {
		BigInteger ans = new BigInteger("1");
		for(int i = 2; i <= n; ++i) {
			ans = ans.multiply(BigInteger.valueOf(i));
		}
		return ans;
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		for(int i = 0; i < t; ++i) {
			int n = s.nextInt();
			System.out.println(fact(n));
		}
	}
}

/*
FCTRL2 - Small factorials
#math #big-numbers
You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!

Example
Sample input:
4
1
2
5
3
Sample output:

1
2
120
6
*/
