public class P12 {
    public static void main(String[] args) {
        try {
            System.out.println("Inside try");
        } catch (ArithmeticException e) {
            System.out.println("Inside catch");
        } finally {
            System.out.println("Inside Finally");
        }
    }
}
