// WAP to generate a random password of a specified length. The password should 
// consist of a combination of uppercase letters, lowercase letters, numbers and 
// special characters. Utilize the Random class to generate random characters.
// Example:
// Generated Password: RtAe7tK@

import java.util.*;

public class Java22 {
    public static String setOfChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&*";
    static int len = setOfChars.length();

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter password length: ");
        int passLen = sc.nextInt();
        String result = generate(passLen);
        System.out.println(result);
    }

    public static String generate(int n) {
        String password = "";
        for (int i = 0; i < n; i++) {
            int num = (int) (Math.random() * len);
            password += setOfChars.charAt(num);
        }
        return password;
    }
}
