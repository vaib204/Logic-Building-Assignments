#include <iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT ino)
{
  UINT imask = 0x08104040;
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
    cout << "7th & 15th & 21st & 28th bit is on\n";
  }
  else
  {
    cout << "7th & 15th & 21st & 28th bit is off\n";
  }
  return 0;
}