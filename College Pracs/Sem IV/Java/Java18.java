// Write a Java program that demonstrates exception handling using three different types
// of exceptions.

public class Java18 {
    public static void main(String[] args) {
        try {
            int a = 5;
            int b = 0;
            int c = a / b;
        } catch (Exception e) {
            System.out.println("Arithmetic exception: / by 0");
            System.out.println(e);
        }
        System.out.println();

        try {
            int arr[] = new int[3];
            int num = arr[5];
        } catch (Exception e) {
            System.out.println("Array index out of bound");
            System.out.println(e);
        }
        System.out.println();

        try {
            String txt = null;
            System.out.println(txt.length());
        } catch (Exception e) {
            System.out.println("Null pointer exception");
            System.out.println(e);
        }
        System.out.println();

        try {
            String txt = "Suraj";
            int num = Integer.parseInt(txt);
            System.out.println(num);
        } catch (Exception e) {
            System.out.println("Number format exception");
            System.out.println(e);
        }
    }
}
