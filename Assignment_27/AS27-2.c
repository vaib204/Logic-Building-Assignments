#include <stdio.h>
#include <string.h>

void StrNcpyx(char *src, char *dest, int icnt)
{
  if (src = NULL)
  {
    return;
  }
  while (*src != '\0' && icnt != 0)
  {
    *dest = *src;
    src++;
    dest++;
    icnt--;
  }
  *dest = '\0';

  printf(" Destination is :", dest);
}
int main()
{
  char arr[30] = "Marvellous Multi Os ";
  char brr[30];

  StrNcpyx(arr, brr, 10);

  printf("%s", brr);

  return 0;
}