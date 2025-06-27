#include <stdio.h>
#include <stdbool.h>

void DisplaySchedule(char chDiv)
{
  if (chDiv == 'A' || chDiv == 'a')
  {
    printf("your exam at 7.00 AM");
  }
  else if (chDiv == 'B' || chDiv == 'b')
  {
    printf("your exam at 8.30 AM");
  }
  else if (chDiv == 'C' || chDiv == 'c')
  {
    printf("your exam at 9.20 AM");
  }
  else if (chDiv == 'D' || chDiv == 'd')
  {
    printf("your exam at 10.30 AM");
  }
  else
  {
    printf("wrong Division");
  }
}
int main()
{
  char cValue = '\0';
  bool bRet = false;

  printf("enter the charchter:");
  scanf("%c", &cValue);

  DisplaySchedule(cValue);

  return 0;
}