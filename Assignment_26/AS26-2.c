#include <stdio.h>

int CountChar(char *str, char ch)
{
  int icount = 0;
  while (*str != '\0')
  {
    if (*str == ch)
    {
      icount++;
    }
    str++;
  }
  return icount;
}

int main()
{
  char arr[20];
  char cvalue = '\0';
  int iret = 0;

  printf("Enter String:");
  scanf("%[^'\n]s", arr);

  printf("Enter the charachter:");
  scanf(" %c", &cvalue);

  iret = CountChar(arr, cvalue);

  printf("charchter frequnecy is:%d", iret);

  return 0;
}