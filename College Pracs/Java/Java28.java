// WAP to accept students name from command line 
// and store them in a vector.

import java.util.Scanner;
import java.util.Vector;

public class Java28 {
    public static void main(String[] args) {
        // Using arrays
        Scanner sc = new Scanner(System.in);
        // String[] name = new String[3];
        // for (int i = 0; i < 3; i++) {
        // String t = sc.nextLine();
        // name[i] = t;
        // }
        // for (int i = 0; i < 3; i++) {
        // System.out.println(name[i]);
        // }

        // using vector
        Vector<String> name = new Vector<>();
        for (int i = 0; i < 3; i++) {
            String t = sc.nextLine();
            name.add(t);
        }
        for (String i : name) {
            System.out.println(i);
        }
    }
}
