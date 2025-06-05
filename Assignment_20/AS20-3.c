// N : 6
// NO : 66
//  Elemets:85,66,3,66,93,88
// output:3

#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iLength, int ino)
{
  int icnt = 0;
  int lastindex = -1;

  if ((Arr == NULL) || (iLength <= 0))
  {
    return -1;
  }
  for (icnt = 0; icnt < iLength; icnt++)
  {
    if (Arr[icnt] == ino)
    {
      lastindex = icnt;
    }
  }
  return lastindex;
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
    printf("enter elements %d:", iCnt);
    scanf("%d", &p[iCnt]);
  }
  iRet = LastOcc(p, iSize, iValue);

  if (iRet == -1)
  {
    printf("%d", iRet);
  }
  else
  {
    printf("%d", iRet);
  }
  free(p);
  return 0;
}