package strings;
import java.util.*;
class reversestring{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String a=sc.next();
        StringBuilder b=new StringBuilder(a);
        for (int i=0;i<b.length()/2;i++){
            int temp=i;
            int back=b.length()-1-i;
            char front=b.charAt(temp);
            char backer=b.charAt(back);   
            b.setCharAt(temp,backer);
            b.setCharAt(back,front);
        }
        System.out.println(b);
    }
}