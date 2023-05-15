// Write a Java program to check if a given string is a palindrome. 
// A palindrome is a word, phrase, number, or other sequence of 
// characters that reads the same forward and backward.

import java.util.*;

public class Java14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        if (check(a))
            System.out.println("It is a palindrome");
        else
            System.out.println("It is not");
    }

    public static boolean check(String a) {
        int n = a.length();
        for (int i = 0; i < a.length() / 2; i++) {
            if (a.charAt(i) != a.charAt(n - i - 1))
                return false;
        }
        return true;
    }
}
