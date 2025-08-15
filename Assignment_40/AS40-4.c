#include<stdio.h>

void Display(char c)
{
  static int i = 1;

  if(c >= 'A' && c <= 'Z')
  {
  printf("%c\t",c);
  c++;
  Display(c);
  }
}

int main()
{
  char ch = '\0';

  printf("Enter the Charchter:\n");
  scanf("%c",&ch);

  Display(ch);
 
  return 0;
}