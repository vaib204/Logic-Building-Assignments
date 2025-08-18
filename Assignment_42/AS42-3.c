#include<stdio.h>

int Strlen(char *str)
{
 static int icount = 1;

  if(*str == '\0')
  {
    return 0;
  }
   return icount+Strlen(str+1);;
}



int main()
{
  int iRet =  0;
  char arr[20];

  printf("Enter String:");
  scanf("%s",arr);

  iRet  = Strlen(arr);

  printf("%d",iRet);

  return 0;

}