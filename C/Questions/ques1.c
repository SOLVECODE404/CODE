#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a,b,c,d,e,rollno,age;
    char name[20];
    printf("enter the name:");
    fgets(name,20,stdin);
    printf("enter the roll no:");
    scanf("%d",&rollno);
    printf("enter the age:");
    scanf("%d",&age);
    printf("enter the marks of subject a:");
    scanf("%d",&a);
    printf("enter the marks of subject b:");
    scanf("%d",&b);
    printf("enter the marks of subject c:");
    scanf("%d",&c);
    printf("enter the marks of subject d:");
    scanf("%d",&d);
    printf("enter the marks of subject e:");
    scanf("%d",&e);
    float percentage=(a+b+c+d+e)/5;
    printf("the student name is %s\n:",name);
    printf("the percentege of stduent is :%.3f\n",percentage);
    if (percentage>80&&percentage<100)
    {
        printf("grade is A\n");
    }
    else if (percentage>70&&percentage<80)
    {
        printf("grade is B\n");
    }
    else if (percentage>60&&percentage<70)
    {
        printf("grade is C\n");
    }
    else if (percentage>40&&percentage<60)
    {
        printf(" grade is D\n");
    }
    else if (percentage<40)
    {
        printf("fail\n");
    
    }
        return 0;
}
