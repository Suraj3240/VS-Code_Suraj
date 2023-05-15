// Create a Java class named Animal with properties for name and age, and methods for
// setting these properties and displaying them. Then, create a subclass named Dog that
// inherits from Animal and adds a new property for breed and a new method for setting
// and displaying this property.

class Animal {
    private String name;
    private int age;

    public Animal() {
        System.out.println("Constructor called.");
    }

    public void setProps(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void display() {
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
    }
}

class Dog extends Animal {
    private String breed;

    public Dog() {
        System.out.println("Dog Constructor called.");
    }

    public void setBreed(String breed) {
        this.breed = breed;
    }

    public void displayBreed() {
        System.out.println("Breed of dog is: " + this.breed);
    }
}

public class Java9 {
    public static void main(String[] args) {
        Animal animal = new Animal();
        animal.setProps("Tommy", 3);
        animal.display();

        Dog dog1 = new Dog();
        dog1.setProps("Tom", 5);
        dog1.display();
        dog1.setBreed("Husky");
        dog1.displayBreed();
    }
}
