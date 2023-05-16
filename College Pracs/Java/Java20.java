// Write a Java program that demonstrates multithreading by creating two threads:
// "ThreadA" and "ThreadB". Instruct students to implement the program to perform the
// following tasks:
// ThreadA should display the numbers from 1 to 5.
// ThreadB should display the numbers from 6 to 10.
// Ensure that both threads run concurrently and display their respective numbers without
// interleaving or overlapping.

class ThreadA implements Runnable {
    @Override
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(i);
        }
    }
}

class ThreadB implements Runnable {
    @Override
    public void run() {
        for (int i = 6; i <= 10; i++) {
            System.out.println(i);
        }
    }
}

public class Java20 {
    public static void main(String[] args) {
        Thread threadA = new Thread(new ThreadA());
        Thread threadB = new Thread(new ThreadB());
        threadA.start();
        try {
            threadA.join();
        } catch (Exception e) {
        }
        threadB.start();
    }
}
