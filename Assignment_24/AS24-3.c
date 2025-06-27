#include <stdio.h>
int CountSmall(char *str)
{
  int iCountsmall = 0, icountcaptial = 0, idiffer = 0;

  while (*str != '\0')
  {
    if (*str >= 'a' && *str <= 'z')
    {
      iCountsmall++;
    }
    else if (*str >= 'A' && *str <= 'Z')
    {
      icountcaptial++;
    }
    idiffer = icountcaptial - iCountsmall;
    str++;
  }
  return idiffer;
}

int main()
{
  char Arr[20];
  int iRet = 0;

  printf("Enter a String:");
  scanf("%[^\n]s", Arr);

  iRet = CountSmall(Arr);
  printf("%d", iRet);

  return 0;
}