import java.util.*;
class calculator{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the fisrt no");
        int a=sc.nextInt();
        System.out.println("enter the second no");
        int b=sc.nextInt();
        int sum=a+b;
        System.out.println("the sum of two variable is");
        System.out.println(sum);
        int sub=a-b;
        System.out.println("the diff of two variable is");
        System.out.println(sub);
        System.out.println("the division of teo variable is");
        int div=a/b;
        System.out.println(div);
    }
}
