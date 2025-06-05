#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
int Maximum(int Arr[], int iLength)
{
  int icnt = 0, imax = 0;
  for (icnt = 0; icnt < iLength; icnt++)
  {
    if (Arr[icnt] > imax)
    {
      imax = Arr[icnt];
    }
  }
  return imax;
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
  iRet = Maximum(p, iSize);

  printf("largest number is %d", iRet);

  free(p);

  return 0;
}
