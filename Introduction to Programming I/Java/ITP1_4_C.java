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
        while(true){
            String inputStr = sc.nextLine().trim();
            if(inputStr.equals("?")){
                break;
            }
            String[] parts = inputStr.split("\\s");
            int a = Integer.parseInt(parts[0]);
            char op = parts[1].charAt(0);
            int b = Integer.parseInt(parts[2]);

            int res = calculate(a, b, op);
            System.out.println(res);
        }
        sc.close();
    }
}
