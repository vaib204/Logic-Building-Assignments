#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
  if (ch >= '0' && ch <= '9')
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}
int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("enter the charchter:");
  scanf("%c", &cValue);

  bRet = ChkDigit(cValue);

  if (bRet == TRUE)
  {
    printf("it is Digit");
  }
  else
  {
    printf("it is not a Digit");
  }
  return 0;
}