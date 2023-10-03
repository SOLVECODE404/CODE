#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int long  n;
    scanf("%ld", &n);
    int long  cnt = 0;
    int power = 1;
    int sum = 0;
    int temp=n;
    while (temp!=0)
    {
        cnt++;
        temp /= 10;
    }
    printf("%ld\n",cnt);
    if (cnt>10)
    {
        printf("ERROR");
        exit(0);
    }
    // else if (cnt<=10)
    // {
    //     while (temp!= 0)
    //     {

    //         int rem = temp% 10;
    //         if (rem == 1)
    //         {
    //             sum += power;
    //         }
    //         power *= 2;
    //         temp/= 10;
    //     }
    //     printf("%d", sum);}
    // else{
    //     exit(0);
    // }
}