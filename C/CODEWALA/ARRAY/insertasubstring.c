// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// #include<string.h>
// #include<ctype.h>
// void main()
// {
//     char a[20];
//     char b[5];
//     int n;
//     printf("enter the first string:");
//     gets(a);
//     printf("enter the character/string u wnt to add :");
//     gets(b);
//     printf("enter the index u wnt to insert");
//     scanf("%d",&n);
//     int l1,l2,i;
//     l1=strlen(a);
//     l2=strlen(b);
//     if (n>l1){
//         printf("invalid input");
//         exit(0);
//     }
//     for (i=l1;i>=n;i--){
//         a[l2+i]=a[i];
//     }
//     for (i=0;i<l2;i++){
//         a[n+i]=b[i];
//     }
//     printf("the string after update is %s:",a);
// }
// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {
    char a[20];
    char b[10];
    int n,i,l1,l2;
    gets(a);
    gets(b);
    scanf("%d",&n);
    l1=strlen(a);
    l2=strlen(b);
    if (n>l1){
        printf("invalid input");
        exit(0);
    }
    for (i=l1;i>=n;i--){
        a[l2+i]=a[i];
    }    
    for (i=0;i<l2;i++){
        a[n+i]=b[i];
    }
    printf("the updated string is %s",a);
}