#include<stdio.h>
int main()
{ 
    int x,y;
    printf("enter the no :");
    scanf("%d %d",&x,&y);
    if (y>0)
    {
        while(y!=0)
        {
        x++;
        y--;
        }
    }    
    else if (y<0)
    {
        while(y!=0)
        {
            x--;
            y++;
        }   
    }
    
    printf("sum of two no is: %d",x);
    return 0;
}  