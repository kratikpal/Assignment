import java.util.Scanner;
import java.lang.Math;

public class P6 {
    public static void main(String[] args) {
        int n, temp, rem, ans = 0, digit = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        n = sc.nextInt();
        temp = n;
        while (temp != 0) {
            temp = temp / 10;
            digit++;
        }
        temp = n;
        do {
            rem = temp % 10;
            ans += Math.pow(rem, digit);
            temp /= 10;
        } while (temp != 0);
        if (ans == n) {
            System.out.println("Number is Armstrong");
        } else {
            System.out.println("Number is not Armstrong");
        }
    }
}
