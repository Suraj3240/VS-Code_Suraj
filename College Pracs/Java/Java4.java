// The annual examination results of 5 students are tabulated as follows:
// WAP to read the data and determine the following:
// • Total marks obtained by each student
// • The student who obtained the highest total marks

import java.util.*;

public class Java4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] student = new int[5][4];
        int[] total = new int[5];
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 4; j++) {
                if (j == 0)
                    student[i][j] = i + 1;
                else {
                    System.out.print("Enter marks of student " + i + 1 + " " + j + " ");
                    int marks = sc.nextInt();
                    student[i][j] = marks;
                    total[i] += marks;
                }
            }
        }
        int maxi = 0;
        int roll = 0;
        System.out.println("Total marks obtained by each student: ");
        for (int i = 0; i < 5; i++) {
            System.out.println(total[i] + " ");
            if (maxi < total[i]) {
                maxi = total[i];
                roll = i + 1;
            }
        }
        System.out.println();
        System.out.println();
        System.out.println("The student who obtained the highest total marks");
        System.out.println(roll + " " + maxi);

    }
}
