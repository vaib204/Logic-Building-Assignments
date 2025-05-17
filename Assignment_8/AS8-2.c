#include <stdio.h>
double RectArea(float fwdith, float fheight)
{
  float fArea = 0.0;
  fArea = fwdith * fheight;
  // printf("%f", fArea);
  return fArea;
}

int main()
{
  float fvalue1 = 0.0, fvalue2 = 0.0;
  double dRet = 0.0;

  printf("Enter width:");
  scanf("%f", &fvalue1);

  printf("Enter height:");
  scanf("%f", &fvalue2);

  dRet = RectArea(fvalue1, fvalue2);

  printf("%f", dRet);

  return 0;
}