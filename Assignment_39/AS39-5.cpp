#include<iostream>
using namespace std;

template<class T>
int Reverse(T *arr,int size)
{
 for(int i = size-1;i>=0;i--)
 {
   cout << arr[i] << " ";    
 }
 cout<<"\n";
}

int main()
{
  int isize = 0,i = 0,iret = 0;
  int *ptr = NULL;

  cout<<"Enter the Number:";
  cin>>isize;

  ptr = new int[isize];

  for ( i = 0; i < isize; i++)
  {
    cin>>ptr[i];
  }

   Reverse(ptr,isize);
  

}