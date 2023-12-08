
// You have been given an array of positive integers A1, A2,…,An with length N and you
// have to print an array of same length (N) where the values in the new array are the
// sum of every number in the array, except the number at that index
import java.util.*;

public class Java11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int[] ans = new int[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            arr[i] = x;
            sum += x;
        }
        print(arr, n);
        for (int i = 0; i < n; i++) {
            ans[i] = sum - arr[i];
        }
        print(ans, n);
    }

    public static void print(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
