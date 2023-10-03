package array;
import java.util.*;
class maxmin{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int[] a= new int[n];
for (int i=0;i<n;i++){
    a[i]=sc.nextInt();
}
for (int i=0;i<a.length;i++) System.out.print(a[i]+" ");
int min=99999999;
int max=-1;
for (int i=0;i<a.length;i++){
    if (a[i]<min){
        min=a[i];
    }
    if (a[i]>max){
        max=a[i];
    }
}
System.out.println();
System.out.println("max is: "+max);
System.out.println("min is: "+min);
}
}
