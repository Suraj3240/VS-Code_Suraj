// Write a program that takes an array of integers as input 
// and finds the maximum and minimum values in the array.

import java.util.*;

public class Java15 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int maxi = Integer.MIN_VALUE;
        int mini = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            arr[i] = x;
            maxi = Math.max(maxi, x);
            mini = Math.min(mini, x);
        }
        System.out.println(maxi + " " + mini);
    }
}