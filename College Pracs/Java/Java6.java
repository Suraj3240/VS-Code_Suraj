// Compare two strings and display whether they are equal or not.

import java.util.Scanner;

public class Java6 {
    public static void main(String[] args) {
        // using in built function
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();
        if (a.equals(b))
            System.out.println("Equal");
        else
            System.out.println("Not equal.");
        check();

    }

    public static void check() {
        // no in built function
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();
        if (a.length() != b.length()) {
            System.out.println("Not equal");
            return;
        }
        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i) != b.charAt(i)) {
                System.out.println("Not Equal.");
                return;
            }
        }
        System.out.println("Equal.");
        return;
    }
}
