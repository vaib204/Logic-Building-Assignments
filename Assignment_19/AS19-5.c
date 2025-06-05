#include <stdio.h>
#include <stdlib.h>
int CountEven(int Arr[], int iLength, int iNo)
{
  int iCount = 0, icnt = 0;
  for (icnt = 0; icnt < iLength; icnt++)
  {
    if (Arr[icnt] == iNo)
    {
      iCount++;
    }
  }
  return iCount;
}

int main()
{
  int iSize = 0, iRet = 0, iCnt = 0, ivalue = 0;
  int *p = NULL;

  printf("Enter number of elements:");
  scanf("%d", &iSize);

  printf("Enter the number:");
  scanf("%d", &ivalue);

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
  iRet = CountEven(p, iSize, ivalue);

  printf("Result is %d", iRet);

  free(p);

  return 0;
}