#include<stdio.h>
int main(){
    // FILE*ptr=NULL;
    // ptr=fopen("mytext.txt","w");
    // // char s[30];
    // // fgets(s,4,ptr);
    // printf("%s",s);
    // // char c=getc(ptr);
    // fputc('o',ptr);
    // fputs("the area is:",ptr);  
    // // printf("%c",c);
    // fclose(ptr);
    FILE*ptr=NULL;
    ptr=fopen("mytext.txt","a+");
    fputs("hy",ptr);

}       


// r+ append the data in place of that and then leave the remaining one in that only ...
// w+ append the data in plcae of all ....
// a+  append in the last of previous