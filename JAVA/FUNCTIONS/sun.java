package FUNCTIONS;
import java.util.*;

import javax.management.relation.RelationTypeSupport;
public class sun{
    public static void sum(int a,int b) {
        int sum=a+b;
        System.out.println(sum);
        return;
    }
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int m=sc.nextInt();
sum(n,m);
}
}