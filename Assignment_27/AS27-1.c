#include <stdio.h>
#include <string.h>

void Strcpyx(char *src, char *dest)
{
  // Fileter
  if (src == NULL)
  {
    return;
  }

  while (*src != '\0')
  {
    *dest = *src;
    src++;
    dest++;
  }
  *dest = '\0';

  printf(" Destination is :", dest);
}
int main()
{
  char arr[30] = "Marvellous Multi Os";
  char brr[30];

  Strcpyx(arr, brr);

  printf("%s", brr);

  return 0;
}
