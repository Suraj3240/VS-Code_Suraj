// Write a Java program that demonstrates multithreading by creating two
// threads:
// "ThreadA" and "ThreadB". Instruct students to implement the program to
// perform the
// following tasks:
// ThreadA should display the message "Hello from ThreadA" five times.
// ThreadB should display the message "Hello from ThreadB" five times.
// Ensure that both threads run concurrently and display their respective
// messages in an
// interleaved manner without any delay between the messages.

class ThreadA extends Thread {
    char thrd;

    void setChar(char a) {
        this.thrd = a;
    }

    @Override
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println("Hello from " + "Thread" + thrd);
        }
    }
}

public class Java19 {
    public static void main(String[] args) {
        ThreadA threadA = new ThreadA();
        threadA.setChar('A');
        ThreadA threadB = new ThreadA();
        threadB.setChar('B');
        threadA.start();
        threadB.start();
    }
}
