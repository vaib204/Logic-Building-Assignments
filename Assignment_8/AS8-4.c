#include <stdio.h>
double FhtoCs(float iValue)
{
  float fcel = 0.0;
  fcel = (iValue - 32) * (5.0 / 9.0);
  {
    return fcel;
  }
}

int main()
{
  float fvalue1 = 0.0;
  double dRet = 0.0;

  printf("enter area in square feet:");
  scanf("%f", &fvalue1);

  dRet = FhtoCs(fvalue1);

  printf("%f", dRet);

  return 0;
}