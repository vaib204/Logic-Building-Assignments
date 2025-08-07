#include <iostream>
#include <stdbool.h>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT ino)
{
  UINT imask = 0x000001c0;
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
    cout << "7th & 8th & 9th bit is on\n";
  }
  else
  {
    cout << "7th & 8th & 9th bit is off\n";
  }
  return 0;
}