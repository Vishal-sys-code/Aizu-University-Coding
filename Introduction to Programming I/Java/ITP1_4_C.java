import java.util.*;
public class ITP1_4_C {
    public static int calculate(int a, int b, char op){
        switch(op){
            case '+':
                return a + b;
            case '-':
                return a-b;
            case '*':
                return a*b;
            case '/':
                return a/b;
            default:
                return -1;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        sc.close();
    }
}
