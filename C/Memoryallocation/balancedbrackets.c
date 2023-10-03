#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#define max 100

char stack[max];
int top=-1;

int isempty(){
    if (top==-1)return 1;
    else return 0;
}

int isfull(){
    if(top==max-1)return -1;
    return 0;
}

char pop(){
    if(isempty())printf("empty");
    else {
        char val=stack[top];
        top--;
        return val;
    }
}

void push(char c){
    top++;
    stack[top]=c;
}

int main(){
    char string[max];
    scanf("%s",string);
    for(int i=0;i<strlen(string);i++){
        if (string[i] == '[' || string[i] == '(' || string[i] == '{' || string[i] == '<'){
            push(string[i]);
        }
        else if (string[i] == ']' || string[i] == ')' || string[i] == '}' || string[i] == '>'){
            if(top==-1){printf("unbalanced");return 0;}
            char brac=pop();
            if(string[i]==']'&&brac!='['||string[i]==')'&&brac!='('||string[i]=='}'&&brac!='{'||string[i]=='>'&&brac!='<'){
                printf("unbalanced");return 0;
            }
        }
    }
    if(top==-1)printf("balanced");
    else printf("unbalanced");
}