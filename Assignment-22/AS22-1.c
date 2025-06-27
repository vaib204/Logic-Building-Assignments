#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
  if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
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

  bRet = ChkAlpha(cValue);

  if (bRet == TRUE)
  {
    printf("it is charchter");
  }
  else
  {
    printf("it is not charchter");
  }
  return 0;
}
