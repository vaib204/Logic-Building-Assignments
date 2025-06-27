#include <stdio.h>

void StrRev(char *str)
{
  char *start = NULL;
  char *end = NULL;
  char temp = '\0';

  start = str;
  end = str;

  while (*end != '\0')
  {
    end++;
  }
  end--;
  while (start <= end)
  {
    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }
}

int main()
{
  char arr[20];

  printf("Enter String:");
  scanf("%[^'\n]s", arr);

  StrRev(arr);

  printf("Modified string is:%s", arr);

  return 0;
}