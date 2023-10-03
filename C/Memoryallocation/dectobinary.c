#include<stdlib.h>
#include<stdio.h>
#define max 100

int stack[max];
int top=-1;

int isempty(){
    if(top==-1)return 1;
    else return 0;
}
int isfull(){
    if(top==max-1)return -1;
    else return 0;
}
void push(int data){
    top++;
    stack[top]=data;
}
void dec2bin(int n){
    while(n!=0){
        push(n%2);
        n/=2;
    }
}
int pop(){
    int val=stack[top];
    top--;
    return val;
}
void display(){if(isempty()){printf("overflow");exit(1);}  while(!isempty()){printf("%d",pop());}}
int main(){
    int n;
    printf("enter the decimal no:");
    scanf("%d",&n);
    dec2bin(n);
    display();
}