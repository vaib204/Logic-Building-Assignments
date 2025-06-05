#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int ino)
{
  int icnt = 0;
  for (icnt = 0; icnt < iLength; icnt++)
  {
    if (Arr[icnt] == ino)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
  int *p = NULL;
  BOOL bRet = false;

  printf("Enter number of elements:");
  scanf("%d", &iSize);

  printf("enter number:");
  scanf("%d", &iValue);

  p = (int *)malloc(iSize * sizeof(int));

  if (p == NULL)
  {
    printf("unable to allocate memory");
    return -1;
  }
  printf("enter %d elements:\n", iSize);
  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("enter elements %d:", iCnt + 1);
    scanf("%d", &p[iCnt]);
  }
  bRet = Check(p, iSize, iValue);

  if (bRet == true)
  {
    printf("number is present");
  }
  else
  {
    printf("number is not present");
  }
  free(p);
  return 0;
}
