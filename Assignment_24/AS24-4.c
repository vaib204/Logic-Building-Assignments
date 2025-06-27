#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Chkvowel(char *ch)
{
  while (*ch != '\0')
  {
    if (*ch == 'a' || *ch == 'e' || *ch == 'i' || *ch == 'o' || *ch == 'u')
    {
      return TRUE;
    }
    ch++;
  }
  return FALSE;
}
int main()
{
  char arr[20];

  BOOL bRet = FALSE;

  printf("enter string:");
  scanf("%[^'\n]s", arr);

  bRet = Chkvowel(arr);

  if (bRet == TRUE)
  {
    printf("contain vowel", bRet);
  }
  else
  {
    printf("there is no vowel", bRet);
  }
  return 0;
}