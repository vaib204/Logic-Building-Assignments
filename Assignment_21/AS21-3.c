#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
int Differnce(int Arr[], int iLength)
{
  int icnt = 0, imin = 0, imax = 0;
  for (icnt = 0; icnt < iLength; icnt++)
  {
    imin = Arr[0], imax = Arr[0];
    if (Arr[icnt] < imin)
    {
      imin = Arr[icnt];
    }
    if (Arr[icnt] > imax)
    {
      imax = Arr[icnt];
    }
  }
  return imax - imin;
}

int main()
{
  int iSize = 0, iRet = 0, iCnt = 0;
  int *p = NULL;

  printf("Enter number of elements:");
  scanf("%d", &iSize);

  p = (int *)malloc(iSize * sizeof(int));

  if (p == NULL)
  {
    printf("unable to allocate memory");
    return -1;
  }
  printf("Enter %d elements\n", iSize);

  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter element:%d\n", iCnt + 1);
    scanf("%d", &p[iCnt]);
  }
  iRet = Differnce(p, iSize);

  printf("Differnce is %d", iRet);

  free(p);

  return 0;
}