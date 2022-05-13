public class P10 {
    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5 }, odd = 0, even = 0;
        for (int i = 0; i < 5; i++) {
            if (arr[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        System.out.println("Even = " + even + " Odd = " + odd);
    }
}
