import java.util.Scanner;

public class P3 {
    public static void main(String[] args) {
        char c;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a character");
        c = sc.next().charAt(0);
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u'
                    || c == 'U') {
                System.out.println("Vowel");
            } else {
                System.out.println("Consonent");
            }
        } else {
            System.out.println("Enter a correct alphabet");
        }
    }
}
