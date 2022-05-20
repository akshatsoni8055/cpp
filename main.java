/**
 * main
 */

import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Student s1 = new Student("Akshat", 22);
        s1.print();
        System.out.println(Person.count);


        Scanner scan = new Scanner(System.in);

        String name = scan.nextLine();

        System.out.println(name);

        int [] arr = {1,2,3,4,5};

        for (int a:arr) System.out.println(a);

        try {
            System.out.println(arr[6]);
        } catch (Exception e) {
            System.out.println(e);
        }

    }
}


class Person {

    static int count = 0;
    String name = "Unknown";
    int age = 0;

    public Person() {
        count++;
    }

    public Person(String name, int age) {
        this();
        this.name = name;
        this.age = age;
    }

    void print() {
        System.out.println("Name: " + this.name + " age: " + this.age);
    }
}

class Student extends Person {
    int standard = 0;
    char section = 'A';
    int roll = 0;

    public Student(String name, int age) {
        super(name, age);
    }

    void print() {
        System.out.println("Name: " + this.name + " age: " + this.age + " roll: " + this.roll + " class: " + this.standard + " " + this.section);
    }

}
