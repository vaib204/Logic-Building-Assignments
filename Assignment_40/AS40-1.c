#include<stdio.h>

void Display(int val)
{
  static int i = 1;

  if(i<=val)
  {
  printf("*\t",val);
  i++;
  Display(val);
  }
}

int main()
{
  int no = 0;
  int iret = 0;

  printf("Enter the Number:\n");
  scanf("%d",&no);

  Display(no);
 
  return 0;
}
