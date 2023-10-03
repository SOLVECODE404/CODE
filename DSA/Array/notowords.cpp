#include<stdio.h>
int main()
{
  long int num, rev=0;
  int digit, rem;
  printf("Enter the number: ");
  scanf("%ld", &num);
  while(num>0)
  {
    rem = num%10;
    rev = rev*10 + rem;
    num = num/10;
  }
  while(rev>0)
  {
    digit = rev%10;
    switch(digit)
    {
      case 1: printf("One ");
        break;
      case 2: printf("Two ");
        break;
      case 3: printf("Three ");
        break;
      case 4: printf("Four ");
        break;
      case 5: printf("Five ");
        break;
      case 6: printf("Six ");
        break;
      case 7: printf("Seven ");
        break;
      case 8: printf("Eight ");
        break;
      case 9: printf("Nine ");
        break;
      case 0: printf("Zero ");
        break;
      default: printf("Something went wrong!!");
        break;
    }
    rev = rev/10;
  }
    printf("\n");
  return 0;
}