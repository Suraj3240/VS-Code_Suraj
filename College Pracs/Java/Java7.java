// Write an abstract class program to calculate area of circle, rectangle and triangle.

abstract class Shape {
    abstract double area();
}

class Circle extends Shape {
    private double radius;

    Circle(int rd) {
        this.radius = rd;
    }

    double area() {
        return (Math.PI * radius * radius);
    }
}

class Rectangle extends Shape {
    private int l;
    private int b;

    Rectangle(int length, int breadth) {
        this.l = length;
        this.b = breadth;
    }

    double area() {
        return l * b;
    }
}

class Triangle extends Shape {
    private double length;
    private double height;

    Triangle(int length, int height) {
        this.length = length;
        this.height = height;
    }

    double area() {
        return ((1.0 / 2) * length * height);
    }
}

public class Java7 {
    public static void main(String[] args) {
        Shape circle = new Circle(5);
        System.out.println("Area of circle: " + circle.area());
        Shape rect = new Rectangle(4, 5);
        System.out.println("Area of rectangle: " + rect.area());
        Shape triangle = new Triangle(10, 3);
        System.out.println("Area of triagle: " + triangle.area());
    }
}
