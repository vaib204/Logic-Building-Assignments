#include <stdio.h>

void Struprx(char *str)
{
  while (*str != '\0')
  {
    if (*str >= 'a' && *str <= 'z')
    {
      *str = *str - 32;
    }
    str++;
  }
}

int main()
{
  char Arr[20];

  printf("Enter String:");
  scanf("%[^'\n]s", Arr);

  Struprx(Arr);

  printf("modified string is: %s", Arr);

  return 0;
}