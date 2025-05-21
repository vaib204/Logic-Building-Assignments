#include <stdio.h>
void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;
  char ch = '\0', ch2 = '\0';
  for (i = 1, ch = 'A'; i <= iRow; i++, ch++)
  {
    for (j = 1; j <= iCol; j++)
    {
      printf("%c\t", ch);
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0, iValue2;

  printf("Enter the row:");
  scanf("%d", &iValue1);

  printf("Enter the column:");
  scanf("%d", &iValue2);

  Pattern(iValue1, iValue2);
}