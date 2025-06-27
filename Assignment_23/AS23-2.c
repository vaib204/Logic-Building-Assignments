#include <stdio.h>

void Display(char *ch)
{
  if ((*ch >= 'A') && (*ch <= 'Z'))
  {
    *ch = *ch + 32;
  }
  else if ((*ch >= 'a') && (*ch <= 'z'))
  {
    *ch = *ch - 32;
  }
  ch++;
}

int main()
{
  char cValue = '\0';

  printf("Enter the Charcter:");
  scanf("%c", &cValue);

  Display(&cValue);
  printf("output is :%c\n", cValue);

  return 0;
}