package array;

import java.util.Scanner;

public class findelementarray {
    public static void main(String[] args) {
        Scanner  sc= new Scanner(System.in);
        System.out.println("enter the element u wnt to find:");
        int num=sc.nextInt();
        System.out.println("enter the size of array:");
        int size=sc.nextInt();
        int a[]=new int[size];
        for (int i=0;i<size;i++){
            a[i]=sc.nextInt();
        }
        for (int i=0;i<size;i++){
            if(a[i]==num){
                System.out.println("found at index:"+i);
            }
        }
    }
}
