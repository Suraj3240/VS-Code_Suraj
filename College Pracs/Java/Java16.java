// Write a program that calculates the factorial of a given number

import java.util.*;

public class Java16 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int fact = 1;
        for (int i = num; i > 1; i--) {
            fact *= i;
        }
        System.out.println(fact);
        System.out.println(fact_rec(num));
    }

    public static int fact_rec(int n) {
        if (n == 1)
            return 1;
        else
            return n * fact_rec(n - 1);
    }
}
