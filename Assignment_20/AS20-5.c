#include <stdio.h>
#include <stdlib.h>
int Product(int Arr[], int iLength)
{
  int iproduct = 1, iCount = 0, icnt = 0;
  for (icnt = 0; icnt < iLength; icnt++)
  {
    if ((Arr[icnt] % 2) != 0)
    {
      iproduct = Arr[icnt] * iproduct;
    }
  }
  return iproduct;
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
  iRet = Product(p, iSize);

  printf("product is %d", iRet);

  free(p);

  return 0;
}