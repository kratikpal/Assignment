import java.util.Scanner;

public class P1 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        n = sc.nextInt();
        if (n < 0) {
            System.out.println("Number is negative");
        } else {
            System.out.println("Number is positive");
        }
    }
}
