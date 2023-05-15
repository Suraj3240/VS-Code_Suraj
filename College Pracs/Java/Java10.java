// Extract a substring from a given string based on 
// user-specified indices and display the result.
// Eg: Enter a string: surajshinde
// Enter 2 indices: 2 5
// Your substring is: raj

import java.util.*;

public class Java10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String text = sc.next();
        System.out.print("Enter 2 indices: ");
        int x = sc.nextInt();
        int y = sc.nextInt();
        System.out.println("Your substring is: " + text.substring(x, y));
        sc.close();
    }
}