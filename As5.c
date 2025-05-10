#include <stdio.h>
void Accept(int ino)
{
  int icnt = 0;
  for (icnt = 1; icnt <= ino; icnt++)
  {
    printf("*");
  }
}

int main()
{
  int ivalue = 0;
  ivalue = 5;
  printf("enter a value:");
  scanf("%d", &ivalue);

  Accept(ivalue);
  return 0;
}