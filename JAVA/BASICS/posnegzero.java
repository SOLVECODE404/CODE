import java.util.*;
class posnegzero{
public static void main(String[] args){
int pos=0,neg=0,zero=0;
System.out.println("enter the no 1 or zero");
Scanner sc = new Scanner(System.in);
int n=sc.nextInt();
while (n==1){
    System.out.println("enter no 1 or zero");
    int n2=sc.nextInt();
    if (n2>0){pos++;}
    else if (n2<0){neg++;}
    else {zero++;}
    System.out.println("enter the no 1 or zero");
    n=sc.nextInt();

}
System.out.println("pos are"+pos);
System.out.println("neg are"+neg);
System.out.println("zeros are"+zero);
}
}