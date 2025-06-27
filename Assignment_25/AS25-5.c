#include <stdio.h>

int CountSpace(char *str)
{
  int icount = 0;
  while (*str != '\0')
  {
    if (*str == ' ')
    {
      icount++;
    }
    str++;
  }
  return icount;
}

int main()
{
  char Arr[20];
  int iret = 0;

  printf("Enter String:");
  scanf("%[^'\n]s", Arr);

  iret = CountSpace(Arr);
  printf("space count is:%d", iret);

  return 0;
}
