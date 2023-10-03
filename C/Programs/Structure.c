#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    char gender;
};

int main()
{
    struct Student uddeshya;
    uddeshya.name = 'Uddeshya singh';
    uddeshya.age = 18;
    uddeshya.gender = 'M';
    return 0;
}