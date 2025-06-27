#include <stdio.h>

void Display(char ch)
{
  while (ch != '\0')
  {
    if ((ch >= 'A') && (ch <= 'Z'))
    {
      printf("%c\t", ch);
      ch++;
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
      printf("%c\t", ch);
      ch--;
    }
  }
}

int main()
{
  char cValue = '\0';

  printf("Enter the Charcter:");
  scanf("%c", &cValue);

  Display(cValue);
  printf("output is :%c\n", cValue);

  return 0;
}