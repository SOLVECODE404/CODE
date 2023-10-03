import java.net.SocketTimeoutException;
import java.util.*;
class notomonth{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
    int a=sc.nextInt();
    switch(a){
        case 1:System.out.println("jan");
        break;
        case 2:System.out.println("feb");
        break;
        default:System.out.println("invalid month");
    }
}
}