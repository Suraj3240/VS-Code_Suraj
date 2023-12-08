/* 
WAP to display the following patterns:
1
2 1
1 2 3
4 3 2 1
1 2 3 4 5
6 5 4 3 2 1
1 2 3 4 5 6 7

pattern 2

    A
   CB
  FED
 JIHG
*/

import java.util.Scanner;

public class Java26 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean LtR = true;
        boolean RtL = false;
        int maxi = 1;
        for (int j = 1; j <= n; j++) {
            if (LtR) {
                for (int i = 1; i <= maxi; i++) {
                    System.out.print(i + " ");
                }
                maxi++;
                System.out.println();
                LtR = false;
                RtL = true;
            } else {
                for (int i = maxi; i >= 1; i--) {
                    System.out.print(i + " ");
                }
                maxi++;
                System.out.println();
                RtL = false;
                LtR = true;
            }
        }
        pattern2();
    }

    public static void pattern2() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        char curr = 'A';
        char maxi = curr;
        for (int i = 1; i <= n; i++) {
            // print spaces first
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            // print chars
            char temp = maxi;
            for (int j = 1; j <= i; j++) {
                System.out.print((char) temp);
                temp--;
            }
            maxi += i + 1;

            System.out.println();
        }
    }
}
