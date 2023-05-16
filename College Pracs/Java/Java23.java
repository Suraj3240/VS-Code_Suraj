// Search for a specific character or substring within a given 
// string and display whether it is found or not.

import java.util.*;

public class Java23 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String txt = sc.next();
        String pat = sc.next();
        sc.close();
        int l1 = txt.length();
        int l2 = pat.length();
        boolean found = false;
        for (int i = 0; i <= l1 - l2; i++) {
            boolean flag = true;
            for (int j = 0; j < l2; j++) {
                if (txt.charAt(i + j) != pat.charAt(j)) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                System.out.println("Pattern found in string at pos: " + i);
                found = true;
                break;
            }
        }
        if (!found) {
            System.out.println("Pattern not found.");
        }
    }
}
