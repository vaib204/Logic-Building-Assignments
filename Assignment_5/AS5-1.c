#include <stdio.h>
int Pattern(int iNo)
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf(" $ ");
    printf(" * ");
  }
}

int main()
{
  int iValue = 0;
  printf("Enter number:");
  scanf("%d", &iValue);

  Pattern(iValue);

  return 0;
}
