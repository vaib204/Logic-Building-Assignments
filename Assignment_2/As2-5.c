#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
  if (iNo % 2 == 0)
    return TRUE;
  else
    return FALSE;
}

int main()
{
  int ivalue = 0;
  BOOL bRet = FALSE;

  printf("Enter number: ");
  scanf("%d", &ivalue);

  bRet = ChkEven(ivalue);

  if (bRet == TRUE)
    printf("%d is even\n", ivalue);
  else
    printf("%d is odd \n", ivalue);

  return 0;
}