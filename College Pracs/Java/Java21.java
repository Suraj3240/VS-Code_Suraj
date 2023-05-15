// Replace a specific character in a given string with another 
// character based on user input and display the result.

import java.util.*;

public class Java21 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String txt = sc.next();
        char a = sc.next().charAt(0);
        char b = sc.next().charAt(0);
        String ans = txt.replace(a, b);
        System.out.println(txt);
        System.out.println(ans);
    }
}
