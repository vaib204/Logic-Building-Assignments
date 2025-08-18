#include<stdio.h>

int Factorial(int no)
{
  static int i = 1;
  int ifact = 0;
  if(i<=no)
  {
  ifact = ifact*i;
  
  Factorial(no);
  }
  return ifact;
}

int main()
{
  int ivalue = 0;
  int iret = 0;

  printf("Enter the Number:\n");
  scanf("%d",&ivalue);

  iret = Factorial(ivalue);
  printf("%d",iret);
 
  return 0;
}