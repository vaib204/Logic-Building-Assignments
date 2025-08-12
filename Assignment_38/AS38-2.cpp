#include<iostream>
using namespace std;

template<class T>

T Max(T no1, T no2,T no3)
{
  if(no1 > no2 && no1 > no3)
  {
    return no1;
  }
  else if(no2 > no1 && no2 > no3)
  {
    return no2;
  }
  else
  {
    return no3;
  }
}

int main()
{
  int iret = Max(10,80,45);
  printf("%d\n",iret);

  float fRet = Max(10.0f,70.0f,50.0f);
  printf("%f\n",fRet);

  return 0;
}