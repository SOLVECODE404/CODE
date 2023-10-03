#include<stdio.h>
int main()
{
	int i;
	int n;
	printf("enter the no:");
	scanf("%d",&n);
	if (n%2==0)
		{printf("number is even\n");
		if(n%4==0)
		{
			printf("no is also divisible by 4");
		}}
	else
		{printf("number is odd\n");
		if(n%3==0)
		{
			printf("no is also divisible by 3");
		}}
	return 0;
}