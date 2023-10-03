package strings;
import java.util.*;

import javax.swing.plaf.synth.SynthStyle;
class basics{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String n=sc.next();
        StringBuilder a= new StringBuilder(n);
        a.insert(0,'p');
        System.out.println(a);
        a.delete(1,3);
        System.out.println(a);
        int m=a.length();
        System.out.println(m);
        a.append('t');
        System.out.println(a);
    }
}