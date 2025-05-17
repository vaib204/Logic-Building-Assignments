#include <stdio.h>
double RectArea(int iValue)
{
  float fArea = 0.0;
  float iArea = 0.0929;

  fArea = iValue * iArea;
  {
    return fArea;
  }
}

int main()
{
  int ivalue1 = 0;
  double dRet = 0.0;

  printf("enter area in square feet");
  scanf("%d", &ivalue1);

  dRet = RectArea(ivalue1);

  printf("%f", dRet);

  return 0;
}