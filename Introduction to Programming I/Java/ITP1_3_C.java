import java.util.*;
public class ITP1_3_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        if(a == 0 && b == 0) {
            break;
        }
        else if(a>b){
            System.out.println(b + " " + a);
        }
        else{
            System.out.println(a + " " + b);
        }
        sc.close();
    }
}
