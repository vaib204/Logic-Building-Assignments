#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE -1

int Check(int iNo)
{
  if ((iNo % 5) == 0)
  {
    return TRUE;
  }
  else
  {
    return -1;
  }
}
int main()
{
  int ivalue = 0;
  BOOL bRet = FALSE;

  printf("enter number:");
  scanf("%d", &ivalue);

  bRet = Check(ivalue);

  if (bRet == TRUE)
  {
    printf("Divisible by 5");
  }
  else
  {
    printf("not divisible by 5");
  }
  return 0;
}