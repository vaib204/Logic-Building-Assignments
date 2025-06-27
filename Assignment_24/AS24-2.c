#include <stdio.h>
int CountSmall(char *str)
{
  int iCountsmall = 0;

  while (*str != '\0')
  {
    if (*str >= 'a' && *str <= 'z')
    {
      iCountsmall++;
    }
    str++;
  }
  return iCountsmall++;
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