// display all elements from  that range
//  N : 6
//  start: 60
// end  :90

#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int start, int end)
{
  int icnt = 0;
  for (icnt = 0; icnt < iLength; icnt++)
  {
    if (Arr[icnt] > start && Arr[icnt] < end)
    {
      printf("%d\t", Arr[icnt]);
    }
  }
}

int main()
{
  int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
  int iRet = 0;
  int *p = NULL;

  printf("Enter number of elements:");
  scanf("%d", &iSize);

  printf("enter starting point:");
  scanf("%d", &iValue1);

  printf("enter ending point:");
  scanf("%d", &iValue2);

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
  Range(p, iSize, iValue1, iValue2);

  free(p);
  return 0;
}