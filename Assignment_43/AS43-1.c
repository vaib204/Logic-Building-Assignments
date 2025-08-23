#include<stdio.h>
int WhiteSpace(char *str)
{

   if(*str == '\0')
   {
      return 0;
   }
   if(*str == ' ')
   {
     return 1+ WhiteSpace(str+1);
   }
   else
   {
    return WhiteSpace(str+1);
   }
  }  
int main()
{
  char Arr[50] = {'\0'};
  int iret = 0;

  printf("Enter the string\n");
  scanf("%[^'\n']", Arr);
 iret =  WhiteSpace(Arr);
 printf("Number of white space are: %d",iret);

}
