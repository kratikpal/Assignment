public class P9 {
    public static void main(String[] args) {
        int arr[] = { 1, 0, 0, 2, 0, 3 };
        System.out.println("Before shifting array is");
        for (int i = 0; i < 6; i++) {
            System.out.print(arr[i] + " ");
        }
        int count = 0;
        for (int i = 0; i < 6; i++) {
            if (arr[i] != 0)
                arr[count++] = arr[i];
        }
        while (count < 6) {
            arr[count++] = 0;
        }
        System.out.println("");
        System.out.println("After shifting array is");
        for (int i = 0; i < 6; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
