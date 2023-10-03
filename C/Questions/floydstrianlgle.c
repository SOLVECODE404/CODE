#include<stdio.h>
int main()
{
    int group,rollno;
    printf("enter your group:");
    scanf("%d",&group);
    switch(group)
    {
        case 1 ... 5:
            printf("enter the no :");
            scanf("%d",&rollno);
            switch(rollno)
            {
                case 1 ... 5:
                printf("hy");
                break;
                default:
                printf("by");
                break;
            }
            break;
        default:
            break;
        

    }
}