#include <stdio.h>
#include <string.h>

void StrCpySmall(char *src, char *dest)
{
  if (src = NULL)
  {
    return;
  }
  while (*src != '\0')
  {
    if ((*src >= 'a') && (*src <= 'z'))
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

  StrCpySmall(arr, brr);

  printf("%s", brr);

  return 0;
}