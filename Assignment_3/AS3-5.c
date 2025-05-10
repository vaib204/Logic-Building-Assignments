#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int ChkVowel(char cVal)
{
  if (cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u' || cVal == 'A' || cVal == 'E' || cVal == 'I' || cVal == 'O' || cVal == 'U')
  {
    printf("%c", cVal);
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

  printf("enter character:");
  scanf("%c", &cValue);

  bRet = ChkVowel(cValue);

  if (bRet == cValue)
  {
    printf("it is vowel");
  }
  else
  {
    printf("it is not voewls");
  }

  return 0;
}