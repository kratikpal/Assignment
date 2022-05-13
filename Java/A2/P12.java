import java.util.Arrays;

public class P12 {
    public static void main(String[] args) {
        String[] str = { "hat", "rat", "cat", "bat" };
        System.out.println("Before sorting array is");
        for (int i = 0; i < 4; i++) {
            System.out.println(str[i]);
        }
        Arrays.sort(str);
        System.out.println("After sorting array is");
        for (int i = 0; i < 4; i++) {
            System.out.println(str[i]);
        }
    }
}
