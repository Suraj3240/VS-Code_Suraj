// Create a menu driven simple calculator to calculate 
// Addition, Subtraction, Multiplication and Division on two inputs.

import java.util.*;

public class Java3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int opt;
        do {
            System.out.println("\nWhich operation to perform: 1.Add\n2.Subtract\n3.Multiply4. Exit");
            opt = sc.nextInt();
            switch (opt) {
                case 1:
                    System.out.print("Enter 2 numbers: ");
                    int n1 = sc.nextInt();
                    int n2 = sc.nextInt();
                    System.out.println("Sum is: " + (n1 + n2));
                    break;
                case 2:
                    System.out.print("Enter 2 numbers: ");
                    int n3 = sc.nextInt();
                    int n4 = sc.nextInt();
                    System.out.println("Diff is: " + (n3 - n4));
                    break;
                case 3:
                    System.out.print("Enter 2 numbers: ");
                    int n5 = sc.nextInt();
                    int n6 = sc.nextInt();
                    System.out.println("Div is: " + (n5 / n6));
                    break;
                case 4:
                    System.out.print("Thank You.");
                    break;
            }
        } while (opt != 4);
    }
}
