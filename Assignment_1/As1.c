#include <stdio.h>

int Divide(int ino1, int ino2)
{
  if (ino2 == 0)
  {

    return -1;
  }

  return ino1 / ino2;
}

int main()
{
  int ivalue1 = 15, ivalue2 = 18;
  int iRet = 0;

  iRet = Divide(ivalue1, ivalue2);
  printf("Division is: %d\n", iRet);

  return 0;
}
