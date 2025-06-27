#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
  if (ch >= 'A' && ch <= 'Z')
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

  bRet = ChkCapital(cValue);

  if (bRet == TRUE)
  {
    printf("it is capital charchter");
  }
  else
  {
    printf("it is not capital charchter");
  }
  return 0;
}