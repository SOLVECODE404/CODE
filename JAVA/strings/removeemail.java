package strings;
import java.util.*;
class removeemail{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("enter the string:");
        String email=sc.next();
        String result="";
        for (int i=0;i<email.length();i++){
            if (email.charAt(i)== '@'){
                break;
            }
            else{
                result+=email.charAt(i);
            }
        }
        System.out.println("the string without gmail is:"+result);
    }
}