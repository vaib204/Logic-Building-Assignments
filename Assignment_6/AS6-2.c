#include <stdio.h>
void Display(int iNo)
{
  int i = 0;

  printf("%c", iNo);
}

int main
{
  int iValue = 0;

  printf("enter number:");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}