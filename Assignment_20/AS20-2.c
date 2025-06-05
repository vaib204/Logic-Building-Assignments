#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define true 1
#define false -1

int FirstOcc(int Arr[], int iLength, int ino)
{
  int icnt = 0;
  for (icnt = 0; icnt < iLength; icnt++)
  {
    if (Arr[1] == ino)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int iSize = 0, iCnt = 0, iValue = 0;
  int iRet = 0;
  int *p = NULL;

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
  iRet = FirstOcc(p, iSize, iValue);

  if (iRet == -1)
  {
    printf("there is no such number %d", iRet);
  }
  else
  {
    printf("first occurence of number is %d", iRet);
  }
  free(p);
  return 0;
}