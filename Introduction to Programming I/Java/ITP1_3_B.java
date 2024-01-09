import java.util.*;
public class ITP1_3_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i = 1;
        while (true){
            int x = sc.nextInt();
            if (x == 0){
                break;
            }
            System.out.print("Case " + i + ": ");
            i++;
        }
        sc.close();
    }
}
