#include <iostream>
#include <stdbool.h>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT ino)
{
  UINT imask = 1073741824;
  UINT iresult = 0;

  iresult = ino & imask;

  return (iresult == imask);
}

int main()
{
  UINT ivalue = 0;
  bool bret = false;

  cout << "Enter the number:\n";
  cin >> ivalue;

  bret = ChkBit(ivalue);
  if (bret == true)
  {
    cout << "1st and 32 bit is on \n";
  }
  else
  {
    cout << "ist and 32 bit is off\n";
  }
  return 0;
}