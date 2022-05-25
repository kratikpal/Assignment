import java.util.Scanner;

class Overload {
    void area(float a) {
        System.out.println("Area of square is:- " + (a * a));
    }

    void area(float l, float b) {
        System.out.println("Area of rectangle is:- " + 2 * (l + b));
    }
}

public class P1 {
    public static void main(String[] args) {
        float a, b;
        Overload o = new Overload();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the side of square");
        a = sc.nextFloat();
        o.area(a);
        System.out.println("Enter the length and breadth of rectangle");
        a = sc.nextFloat();
        b = sc.nextFloat();
        o.area(a, b);
    }
}