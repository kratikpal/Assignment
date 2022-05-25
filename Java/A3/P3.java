import java.util.Scanner;

class Num {
    int n;

    Num(int x) {
        n = x;
    }

    int getNum() {
        return n;
    }
}

public class P3 {
    public static void main(String[] args) {
        int x;
        System.out.println("Enter a number");
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        Num o = new Num(x);
        System.out.println("Entered number is " + o.getNum());
    }
}
