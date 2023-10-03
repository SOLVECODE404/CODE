package FUNCTIONS;
import java.util.*;

public class factorial {
    public static void factorial(int n) {
        int fact = 1;
        for (int i =n;i>0;i--) {
            fact=fact*i;

        }
        System.out.println(fact);
        return;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        factorial(n);
    }
}