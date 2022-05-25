public class P13 {
    static void divideBy(int n) {
        if (n == 0)
            throw new ArithmeticException("Divide by zero is not possible");
        else
            System.out.println("Devide possible");
    }

    public static void main(String[] args) {
        divideBy(0);
    }
}
