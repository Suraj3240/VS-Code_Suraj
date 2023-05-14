// Write a Java program to add two matrices of the same size

import java.util.*;

public class Java5 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int[][] mat1 = new int[3][3];
        int[][] mat2 = new int[3][3];
        int[][] mat3 = new int[3][3];
        System.out.println("enter mat 1:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int num = sc.nextInt();
                mat1[i][j] = num;
            }
        }
        System.out.println("enter mat 2:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int num = sc.nextInt();
                mat2[i][j] = num;
            }
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        System.out.println();
        printMatrix(mat1);
        System.out.println();
        printMatrix(mat2);
        System.out.println();
        printMatrix(mat3);
    }

    public static void printMatrix(int[][] mat) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }
    }
}
