#include<iostream>
using namespace std;

template<class T>
void Display(T h,int size)
{
   T icnt = 0;

   for(icnt = 0;icnt<size;icnt++)
   {
    cout<<h<<"\t";
   }
}

int main()
{
  cout<<"conversion for the charachter\n";
  char ch = '\0';
  int value = 0;
  cout<<"Enter the Charchter:\n";
  cin>>ch;
  cout<<"Enter the Number:\n";
  cin>>value;
  Display(ch,value);
  cout<<"\n";

  cout<<"conversion for the Integer Number\n";
  int no = 0;
  int val = 0;
  cout<<"Enter the value:\n";
  cin>>no;
  cout<<"Enter the Number:\n";
  cin>>val;
  Display(no,val);
  cout<<"\n";

  cout<<"conversion for the Float Nuumber\n";
  float fno = 0.00f;
  int valuex = 0;
  cout<<"Enter the value:\n";
  cin>>fno;
  cout<<"Enter the Number:\n";
  cin>>valuex;
  Display(fno,valuex);



  return 0;
}
