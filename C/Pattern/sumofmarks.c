#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int number_of_students,i,j,marks[1000],sum=0;
    char gender;
    scanf("%d",&number_of_students);
    for (i=0;i<=number_of_students;i++){
        scanf("%d",&marks[i]);
    }
    scanf("%c",&gender);
    if (gender=='b'){
        for (i=0;i<number_of_students;i++){
            for(j=i+1;j<number_of_students;j++){
                sum+=marks[i];
            }
        }
        printf("%d",sum);
    }
    else (gender=='g');
    {
    for (i=1;i<number_of_students;i++){
            for(j=i+1;j<number_of_students;j++){
                sum+marks[i];
            }
        }
    }
    // printf("\n");
    printf("%d",sum);
    return 0;
}