#include <stdio.h>
int CountCapital(char *str)
{
  int iCountCap = 0;

  while (*str != '\0')
  {
    if (*str >= 'A' && *str <= 'Z')
    {
      iCountCap++;
    }
    str++;
  }
  return iCountCap++;
}

int main()
{
  char Arr[20];
  int iRet = 0;

  printf("Enter a String:");
  scanf("%[^\n]s", Arr);

  iRet = CountCapital(Arr);
  printf("%d", iRet);

  return 0;
}
