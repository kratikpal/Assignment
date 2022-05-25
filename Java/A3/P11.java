public class P11 {
    public static void main(String[] args) {
        try {
            int arr[] = new int[10];
            arr[10] = 30 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Error = " + e.getMessage());
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Error = " + e.getMessage());
        }
    }
}
