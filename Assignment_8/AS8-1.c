#include <stdio.h>
double CircleArea(float fRadius)
{
  float PI = 3.14;
  float Area = 0.0;
  Area = PI * fRadius * fRadius;
  // printf("%f", Area);
  return Area;
}

int main()
{
  float fvalue = 0.0;
  double dRet = 0.0;

  printf("enter number:");
  scanf("%f", &fvalue);

  dRet = CircleArea(fvalue);

  printf("%f", dRet);

  return 0;
}
