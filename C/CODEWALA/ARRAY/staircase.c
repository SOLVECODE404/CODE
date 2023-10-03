#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

// when we can take one step and second step....


int stair(int n){
    if (n==0) return 1;
    else if (n<0) return 0;
    else 
    return stair(n-1)+stair(n-2);
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    printf("%d",stair(n));
}

//  when we can take one step and second step and third step...

// int stair(int n){
//     if (n==0) return 1;
//     else if (n<0) return 0;
//     else
//     return stair(n-1)+stair(n-2)+stair(n-3);
// }
// int main()
// {
//     int n,i,j;
//     scanf("%d",&n);
//     printf("%d",stair(n));
// }