#include<stdio.h>
int main()
{   int a,z,m,k;
    printf("enrter ht no:");
    scanf("%d",&a);
    switch(a>0)
    {
        case 1:
        {
            printf("positive");break;
        }
        case 0:
        switch(a<0)
        {
            case 1:
            {
                printf("negative");break;
            }
            case 0:
            {
                printf("zero");break;
            }
        }
    }
}