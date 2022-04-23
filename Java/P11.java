import java.util.Arrays;

public class P11 {
    public static void main(String[] args) {
        int[] arr = { 2, 4, 6, 3, 1 };
        System.out.println("Before sorting elements are");
        for (int i = 0; i < 5; i++) {
            System.out.println(arr[i]);
        }
        System.out.println();
        Arrays.sort(arr);
        System.out.println("After sorting elements are");
        for (int i = 0; i < 5; i++) {
            System.out.println(arr[i]);
        }
    }
}
