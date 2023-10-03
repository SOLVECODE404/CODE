#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void hanoi(int n,char s,char d,char h){
    if (n==0) return;
    hanoi(n-1,s,h,d);
    printf("%c -> %c\n",s,h);
    hanoi(n-1,d,s,h);
    return ;
}
int main()
{
    int n;
    printf("enter the no of disks:");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
}