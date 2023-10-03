#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void main()
{
    void *p;
    int a=5;
    float b=1.2;
    char ch='c'; 
    p=&a;
    printf("%d\n",*(int*)p);
    p=&b;
    printf("%f\n",*(float*)p);
    p=&ch;
    printf("ch=%c\n",*(char *)p);
    return 0;
}