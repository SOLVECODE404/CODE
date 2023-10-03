#include <stdio.h>

int main()
{
    int group;
    int rollNo;

    printf("Enter group: ");
    scanf("%d", &group);

    switch (group)
    {
    case 15 ... 18:
        printf("Enter roll NO: ");
        scanf("%d", &rollNo);
        switch (rollNo)
        {
        case 1 ... 5:
            printf("Welcome to CSE");
            break;
        default:
            printf("Enter valid rollno: ");
            break;
        }
        break;
    default:
        break;
    }
}
