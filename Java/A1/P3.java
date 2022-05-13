public class P3 {
    public static void main(String[] args) {
        int a = 1, b = 2;
        System.out.print("Before swaping vale of a is " + a);
        System.out.println(" and vale of b is " + b);
        a = a + b;
        b = a - b;
        a = a - b;
        System.out.print("After swaping vale of a is " + a);
        System.out.println(" and vale of b is " + b);
    }
}
