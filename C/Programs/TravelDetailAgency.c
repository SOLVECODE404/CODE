#include <stdio.h>

typedef struct Drivers
{
    char name[40];
    int age;
    char drivingLiscence[50];
    char routed[50];
    int kms;
} Driver;
int main()
{
    Driver uddeshya;
    printf("Enter driver name: \n");
    scanf("%s", uddeshya.name);
    printf("Enter age: \n");
    scanf("%d", &uddeshya.age);
    printf("Enter Driving Liscence Number: \n");
    scanf("%s", uddeshya.drivingLiscence);
    printf("Enter route: \n");
    scanf("%s", uddeshya.routed);
    printf("Enter distance in kilometer: \n");
    scanf("%d", &uddeshya.kms);

    printf("Driver's Name: %s, Driver's Age: %d,Driver's Liscence Number: %s,\nDriver's Route: %s,Distance: %d", uddeshya.name, uddeshya.age, uddeshya.drivingLiscence, uddeshya.routed, uddeshya.kms);

    return 0;
}