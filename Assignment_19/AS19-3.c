#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE -1

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
  int iCnt = 0;

  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] == 11)
    {
      return TRUE;
    }
    else
    {
      return FALSE;
    }
  }
}

int main()
{
  int iSize = 0, icnt = 0;
  int *p = NULL;
  BOOL bRet = FALSE;

  printf("Enter number of elements:");
  scanf("%d", &iSize);

  p = (int *)malloc(iSize * sizeof(int));
  if (p == NULL)
  {
    printf("Unable to allocate memory");
    return -1;
  }
  printf("Enter %d Elements\n", iSize);
  for (icnt = 0; icnt < iSize; icnt++)
  {
    printf("Enter Elements %d:", icnt + 1);
    scanf("%d", &p[icnt]);
  }
  bRet = Check(p, iSize);

  if (bRet == TRUE)
  {
    printf("11 is present");
  }
  else
  {
    printf("11 is not present");
  }
  free(p);
  return 0;
}