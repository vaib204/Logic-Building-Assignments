#include <stdio.h>

void DislayDigit(char *str)
{
  int icount = 0;
  while (*str != '\0')
  {
    if (*str >= '0' && *str <= '9')
    {
      printf("%c", *str);
    }
    str++;
  }
}

int main()
{
  char Arr[20];

  printf("Enter String:");
  scanf("%[^'\n]s", Arr);

  DislayDigit(Arr);

  return 0;
}
