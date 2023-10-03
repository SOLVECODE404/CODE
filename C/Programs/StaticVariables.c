#include <stdio.h>

void functOne()
{
    static int callTimes = 1;
    printf("The function is called %d times.\n", callTimes);
    callTimes++;
}
int main()
{
    functOne();
    functOne();
    functOne();
    functOne();
    functOne();
    functOne();
    functOne();

    return 0;
}