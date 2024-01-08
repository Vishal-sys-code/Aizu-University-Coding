// package Introduction to Programming I.Java;
import java.util.*;
public class ITP1_2_C {
    public static int LargestinThree(int a, int b, int c){
        if (a>b && a>c){
            return a;
        }
        else if(b>a && b>c){
            return b;
        }
        return c;
    }

    public static int SmallestinThree(int a, int b, int c){
        if(a<b && a<c){
            return a;
        }
        else if(b<a & b<c){
            return b;
        }
        return c;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int third_element = LargestinThree(a,b,c);
        int first_element = SmallestinThree(a,b,c);
        int middle_element = (a+b+c)-(first_element+third_element);
        System.out.println(first_element + " " + middle_element + " " + third_element);
        sc.close();
    }
}
