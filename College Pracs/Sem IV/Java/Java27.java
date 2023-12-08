// WAP that reads a positive integer from command line 
// and count the number of digits the number has.

import java.util.Scanner;

public class Java27 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int ans = 0;
        while (num > 0) {
            ans++;
            num /= 10;
        }
        System.out.println("Digits: " + ans);
    }
}
