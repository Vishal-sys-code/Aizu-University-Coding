import java.util.*;

/*
    ALGORITHM_BRUTE_FORCE():
    1. Take it in the array, and also take out the sum of the whole array
    2. After the sum, we need to sort the array using Arrays.sort() in O(N log N) Time Complexity
    3. If the whole array is sorted then the minimum element is in the 0th index and the maximum element is in the (n-1)th index
        minimum => 0th index
        maximum => (n-1)th index
*/

public class ITP1_4_D {
    public static void main(String[] args) {
        /*
        USING SORTING => O(N)+O(log(N))+O(N) => O(2N+log(N)) => O(N+log(N))
        --------------------------------------------------
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        int sum = 0, min = 0, max = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        Arrays.sort(arr);
        min = arr[0];
        max = arr[n - 1];
        System.out.println(min + " " + max + " " + sum);
        --------------------------------------------------
        */
        // Using O(N) operations
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int min = arr[0];
        int max = arr[0];
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        for (int i = 1; i < n; i++) {
            if (min > arr[i]) {
                min = arr[i];
            }
            if (max < arr[i]) {
                max = arr[i];
            }
        }
        System.out.println(min + " " + max + " " + sum);
        sc.close();
    }
}
