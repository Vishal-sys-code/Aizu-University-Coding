// package Introduction to Programming I.Java;
import java.util.*;
public class ITP1_1_D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int hh = n/3600;
        int rem = n%3600;
        int mm = rem/60;
        int ss = rem%60;
        System.out.println(hh + " " + mm + " " + ss);
        sc.close();
    }
}
