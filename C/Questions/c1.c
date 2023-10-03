#include<stdio.h>
#include<math.h>
int main()
{
    float a=3.14;
    float z;
    int i,m;
    printf("enter the radius:");
    scanf("%f",&z);
    i=a*z*z;
    printf("the area is %d\n",i);
    m=2*a*z;
    printf("the circumference is %d",m);
}