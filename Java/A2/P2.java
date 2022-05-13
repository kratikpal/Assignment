import java.util.Scanner;

public class P2 {
    public static void main(String[] args) {
        int n, temp, ans = 0, r;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        n = sc.nextInt();
        temp = n;
        while (n > 0) {
            r = n % 10;
            ans = (ans * 10) + r;
            n = n / 10;
        }
        if (temp == ans) {
            System.out.println("Number is Palindrome");
        } else {
            System.out.println("Number is not palindrome");
        }
    }
}
