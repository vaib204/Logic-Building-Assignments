#include <stdio.h>

void Display(int iNo, int iFrequency)
{
  // int i = 0;

  for (int i = 0; i < iFrequency; i++)
  {
    printf("%d", iNo);
  }
}
int main()
{
  int ivalue = 0;
  int iCount = 0;

  printf("enter number:");
  scanf("%d", &ivalue);

  printf("enter  frequency:");
  scanf("%d", &iCount);

  Display(ivalue, iCount);

  return 0;
}

/*#include <stdio.h>

void Display(int iNo, int iFrequency)
{
  for (int i = 0; i < iFrequency; i++)
  {
    printf("%d ", iNo); // Print the number iNo, iFrequency times
  }
}

int main()
{
  int ivalue = 0;
  int iCount = 0;

  printf("Enter number: ");
  scanf("%d", &ivalue);

  printf("Enter frequency: ");
  scanf("%d", &iCount);

  Display(ivalue, iCount); // Corrected function call

  return 0;
}*/