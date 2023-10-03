package BIT;

import java.util.Scanner;

class updatebit {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int m=sc.nextInt();

        int n = 5;
        int pos = 1;
        int bitmask = 1 << pos;
        if (m==1){
            int newno=bitmask|n;
            System.out.println(newno);}
        else{
        int notbitmask = ~(bitmask);
        int newno = notbitmask & n;
        System.out.println(newno);}
    }
}
