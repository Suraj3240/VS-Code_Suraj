// Write a Java program to generate the Fibonacci series up to a given 
// number 'n'. The Fibonacci series is a sequence of numbers where each 
// number is the sum of the two preceding ones.

import java.util.*;

public class Java1 {
    public static void main(String[] args) {
        int i = 0, j = 1;
        int x = i, y = j;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.print(i + " ");
        System.out.print(j + " ");
        int sum = i + j;
        for (int a = 1; a <= n; a++) {
            sum = i + j;
            System.out.print(sum + " ");
            i = j;
            j = sum;
        }
        System.out.println();
        System.out.println();

        // using recursion
        System.out.print(x + " ");
        System.out.print(y + " ");
        fib_recursive(n, x, y);
    }

    public static void fib_recursive(int n, int i, int j) {
        if (n <= 0)
            return;
        int sum = i + j;
        System.out.print(sum + " ");
        fib_recursive(n - 1, j, sum);
    }
}
