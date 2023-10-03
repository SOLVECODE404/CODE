#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// void reversestring(char* a){
//     int n=strlen(a);
//     for(int i=0;i<n/2;i++){
//     char temp=a[i];
//     a[i]=a[n-i-1];
//     a[n-i-1]=temp;}
// }

// int main(){
//     char a[100];
//     scanf("%[^\n]s",a);
//     printf("Original string:%s\n",a);
//     reversestring(a);
//     printf("Reverse string:%s",a);
// }

#define size 1000
int top=-1,count=0;
char stack[size];
char output[size];

void push(char temp){
    if(top==size-1)
    {printf("Stack overflow");}
    else{
    stack[++top]=temp;
    }
}
void pop(){
    if(top==-1){printf("Stack underlow");}
    else {
        output[count++]=stack[top--];
    }
}

int main(){
    char str[size];
    scanf("%[^\n]s",str);
    for(int i=0;i<strlen(str);i++)
    {
            push(str[i]);
    }
    for (int i = 0; i < strlen(str); i++)
        {
            pop();
        }
    for (int i = 0; i < strlen(str); i++)
        {
            printf("%c",output[i]);
        }
}


// int main(){
//     char c[100];
//     scanf("%[^\n]s",c);
//     for(int i=strlen(c)-1;i>=0;i--){
//         printf("%c",c[i]);
//     }
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char c[100];
//     scanf("%[^\n]s", c);
//     char *token=strtok(c," ");
//     while(token!=NULL){
//         for(int i=strlen(token);i>=0;i--){
//             printf("%c",token[i]);
//         }
//         token=strtok(NULL," ");
//         if(token!=NULL){
//             printf(" ");
//         }
//     }

//     return 0;
// }
