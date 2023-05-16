// Write a Java program that demonstrates the implementation of exception handling.
// Implement:
// ● NumberFormatException
// ● ArrayIndexOutOfBoundsException
// ● ArithmeticException

public class Java25 {
    public static void main(String[] args) {
        try {
            String txt = "DJSCE";
            int num = Integer.parseInt(txt);
            System.out.println(num);
        } catch (Exception NumberFormatException) {
            System.out.println("Number Format exception\n");
            // System.out.println(e);
        }

        try {
            int[] arr = new int[3];
            arr[10] = 19;
        } catch (Exception e) {
            System.out.println("Array Index Out Of Bound\n");
        }

        try {
            int a = 10;
            int b = 0;
            int c = a / b;
        } catch (Exception e) {
            System.out.println("Arithmetic exception\n");
        }
    }
}
