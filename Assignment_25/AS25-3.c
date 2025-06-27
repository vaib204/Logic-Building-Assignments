#include <stdio.h>

void Strtogglex(char *str)
{
  while (*str != '\0')
  {
    if (*str >= 'a' && *str <= 'z')
    {
      *str = *str - 32;
    }
    else if (*str >= 'A' && *str <= 'Z')
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

  Strtogglex(Arr);

  printf("modified string is: %s", Arr);

  return 0;
}