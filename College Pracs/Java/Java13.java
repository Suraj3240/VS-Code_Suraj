// Defines an int enum and then a variable called monthNumber and assigns it a
// value
// between 1 and 12, inclusive. Uses a switch statement to print the name of the
// month corresponding to the value of monthNumber.

import java.util.Scanner;

enum Month {
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER;
}

public class Java13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int monthNumber = sc.nextInt();
        sc.close();
        Month month = Month.values()[monthNumber - 1];
        System.out.println(month);
        switch (month) {
            case JANUARY:
                System.out.println("January");
                break;
            case FEBRUARY:
                System.out.println("Feb");
                break;
            case MARCH:
                System.out.println("March");
                break;
            case APRIL:
                System.out.println("April");
                break;
            case MAY:
                System.out.println("May");
                break;
            case JUNE:
                System.out.println("June");
                break;
            case JULY:
                System.out.println("July");
                break;
            case AUGUST:
                System.out.println("Aug");
                break;
            case SEPTEMBER:
                System.out.println("Sept");
                break;
            case OCTOBER:
                System.out.println("Oct");
                break;
            case NOVEMBER:
                System.out.println("Nov");
                break;
            default:
                System.out.println("December");
                break;
        }
    }
}