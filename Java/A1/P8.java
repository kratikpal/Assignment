import java.util.Scanner;

public class P8 {
    public static void main(String[] args) {
        int p = 100, time;
        double SI;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter time");
        time = sc.nextInt();
        SI = (time > 10) ? ((p * 10 * time) / 100) : ((p * 8 * time) / 100);
        System.out.println("SI is " + SI);

    }
}
