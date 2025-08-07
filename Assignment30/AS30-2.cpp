#include <iostream>
#include <stdbool.h>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

bool ChkBit(UINT ino)
{
  UINT imask = 159698;
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
    cout << "15 bit is on and 5th bit is on";
  }
  else
  {
    cout << "15 bit is off and 5th bit is off";
  }
  return 0;
}