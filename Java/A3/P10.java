public class P10 {
    public static void main(String[] args) {
        try {
            int a = 5 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Error = " + e.getMessage());
        }
    }
}
