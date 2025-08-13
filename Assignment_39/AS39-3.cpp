#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr,int size,T no)
{
  int icnt = 0,iCount = 0;

  for(icnt = 0; icnt<size;icnt++)
  {
     if(arr[icnt] == no)
     {
      return icnt;
     
     }
  }
 return -1;
}

int main()
{
  int isize = 0,i = 0,ivalue = 0,iret = 0;
  int *ptr = NULL;

  cout<<"Enter the Number:";
  cin>>isize;

  ptr = new int[isize];

  for ( i = 0; i < isize; i++)
  {
    cin>>ptr[i];
  }

  cout<<"Enter the value:\n";
  cin>>ivalue;

  iret = SearchFirst(ptr,isize,ivalue);

  cout<<"First Occurence is :"<<iret<<"\n";

}