// Convert a given string to uppercase/lowercase and display the result.

import java.util.Scanner;

public class Java2 {
    public static void main(String[] args) {
        // using inbuilt functions
        Scanner sc = new Scanner(System.in);
        String text = sc.next();
        System.out.println(text.toUpperCase());
        System.out.println(text.toLowerCase());

        noInbuilt();
    }

    public static void noInbuilt() {
        // doesn't use inbuilt functions
        Scanner sc = new Scanner(System.in);
        String text = sc.next();
        String ans = "";
        char[] arr = text.toCharArray();
        for (int i = 0; i < text.length(); i++) {
            if (arr[i] >= 'a' && arr[i] <= 'z') {
                ans += (char) (arr[i] - 'a' + 'A');
            }
        }
        System.out.println(ans);
    }
}
