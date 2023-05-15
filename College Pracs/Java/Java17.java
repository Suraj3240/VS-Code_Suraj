// Write a program that takes a string as input and 
// counts the number of vowels (a, e, i, o, u) in the string.

import java.util.*;

public class Java17 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String txt = sc.next();
        int count = 0;
        for (int i = 0; i < txt.length(); i++) {
            char ch = txt.charAt(i);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                count++;
        }
        System.out.println(count);
    }
}
