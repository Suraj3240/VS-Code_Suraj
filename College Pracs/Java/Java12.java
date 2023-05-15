// Concatenate two strings and display the result. 
// Also display the length of the original
// strings and resultant new string.

import java.util.*;

public class Java12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();
        int l1 = a.length();
        int l2 = b.length();
        String ans = a + b;
        int l3 = ans.length();
        System.out.println(l1 + " " + l2 + " " + ans + " " + l3);
    }
}
