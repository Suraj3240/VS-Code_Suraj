// Create a Java class named Rectangle to represent a rectangle. The class should have
// two instance variables: length and width. The class should have three constructors:
// 1. A default constructor that initializes length and width to 1.
// 2. A constructor that accepts one argument and initializes both length and width
// to the value of the argument.
// 3. A constructor that accepts two arguments and initializes length and width to the
// respective arguments.

class Rectangle {
    public int length;
    public int width;

    public Rectangle() {
        this.length = 1;
        this.width = 1;
    }

    public Rectangle(int a) {
        this.length = a;
        this.width = a;
    }

    public Rectangle(int a, int b) {
        this.length = a;
        this.width = b;
    }
}

public class Java8 {

    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle();
        System.out.println(rectangle.length + " " + rectangle.width);
        Rectangle rectangle2 = new Rectangle(6);
        System.out.println(rectangle2.length + " " + rectangle2.width);
        Rectangle rectangle3 = new Rectangle(3, 9);
        System.out.println(rectangle3.length + " " + rectangle3.width);
    }

}
