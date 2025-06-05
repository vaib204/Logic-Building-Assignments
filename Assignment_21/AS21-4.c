#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int ilength)
{
  int icnt = 0, idigit1 = 999, idigit2 = 99;
  for (icnt = 0; icnt < ilength; icnt++)
  {
    if (Arr[icnt] <= idigit1 && Arr[icnt] > idigit2)
    {
      printf("%d\t", Arr[icnt]);
    }
  }
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
  Digits(p, iSize);

  free(p);

  return 0;
}