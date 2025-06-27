#include <stdio.h>

void Strlwrx(char *str)
{
  while (*str != '\0')
  {
    if (*str >= 'A' && *str <= 'Z')
    {
      *str = *str + 32;
    }
    str++;
  }
}

int main()
{
  char Arr[20];

  printf("Enter String:");
  scanf("%[^'\n]s", Arr);

  Strlwrx(Arr);

  printf("modified string is: %s", Arr);

  return 0;
}
