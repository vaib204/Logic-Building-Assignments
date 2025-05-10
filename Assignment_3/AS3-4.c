#include <stdio.h>
void DisplayConvert(char Cvalue)
{
  if (Cvalue >= 'a' && Cvalue <= 'z')
  {
    Cvalue = toupper(Cvalue);
    printf("%c", Cvalue);
  }
  else if (Cvalue >= 'A' && Cvalue <= 'Z')
  {
    Cvalue = tolower(Cvalue);
    printf("%c", Cvalue);
  }
}

int main()
{
  char cvalue = '\0';
  printf("enter character\n");
  scanf("%c", &cvalue);

  DisplayConvert(cvalue);

  return 0;
}