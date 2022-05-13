import java.util.Scanner;

public class P7 {
    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        n = sc.nextInt();
        for (int i : arr) {
            System.out.println(n + " * " + i + " = " + n * i);
        }
    }
}
