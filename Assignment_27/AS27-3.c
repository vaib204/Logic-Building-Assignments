#include <stdio.h>
#include <string.h>

void StrCpyCap(char *src, char *dest)
{
  if (src = NULL)
  {
    return;
  }
  while (*src != '\0')
  {
    if ((*src >= 'A') && (*src <= 'Z'))
    {
      *dest = *src;
      dest++;
    }
    src++;
  }
  *dest = '\0';

  printf(" Destination is :", dest);
}
int main()
{
  char arr[30] = "Marvellous Multi Os ";
  char brr[30];

  StrCpyCap(arr, brr);

  printf("%s", brr);

  return 0;
}