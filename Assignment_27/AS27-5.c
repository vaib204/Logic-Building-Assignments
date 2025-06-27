#include <stdio.h>
#include <string.h>

void StrCatX(char *src, char *dest)
{
  if (src = NULL)
  {
    return;
  }
  while (*src != '\0')
  {
    src++;
  }
  *src = '"';
  src++;
  *src = ' ';
  src++;

  while (*dest != '\0')
  {
    *src = *dest;
    src++;
    dest++;
  }
  *src = '\0';
}
int main()
{
  char arr[30] = "Marvellous Infosystem";
  char brr[30] = "Logic Building";

  StrCatX(arr, brr);

  printf("%s", arr);

  return 0;
}