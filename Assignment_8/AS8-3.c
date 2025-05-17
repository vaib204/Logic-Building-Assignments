#include <stdio.h>
int KMtoMeter(int ino)
{
  int imet = 1000;
  int iMet = 0;
  iMet = ino * imet;
  return iMet;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("enter  number:");
  scanf("%d", &iValue);

  iRet = KMtoMeter(iValue);
  printf("%d meter", iRet);

  return 0;
}