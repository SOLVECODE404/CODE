#include<stdio.h>
#include<math.h>
int main()
{
    int n,n5,n6,n7,n8,n9;
    printf("enter the no:");
    scanf("%d",&n);
    
    
    n5=n/500;
    
    n6=n%500;
    n7=n6/200;
    
    n8=n6%200;
    n9=n8/100;
    printf("no of 500 notes %d\n",n5);
    printf("no of 200 notes %d\n",n7);
    printf("no of 100 notes %d\n",n9);  
    
}

cse