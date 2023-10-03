// Union is also like struct, but Union has only one memory loaction where in Structure the elements has their own memory location
#include <stdio.h>

struct Student
{
    int age;
    char gender;
    char classSection;
} uddeshya, aditya;

int main()
{
    uddeshya.age = 33;
    uddeshya.classSection = 'A';
    uddeshya.gender = 'M';
    int ageThing = uddeshya.age;
    printf("%d", ageThing);

    return 0;
}