import java.util.*;
public class ITP1_4_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double r = sc.nextDouble();
        double area = Math.PI *r*r;
        double perimeter = 2*Math.PI*r;
        System.out.println(area + " " + perimeter);
        sc.close();
    }
}
