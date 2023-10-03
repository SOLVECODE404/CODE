package array;
import java.util.*;
class checkarray{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int [] a=new int[n];
for (int i=0;i<n;i++) {a[i]=sc.nextInt();}
boolean issorted=true;
for (int i=0;i<a.length-1;i++){
    if (a[i]>a[i+1]){
        issorted=false;
    }
} 
if(issorted){System.out.println("array is sorted");}
else {System.out.println("array is not sorted");}
}
}