#include<stdio.h>
int main()
{
	int i;
	printf("enter the no:");
	scanf("%d",&i);
	(i%2==0?printf("%d even",i):printf("%d odd",i));
	return 0;
}
	
