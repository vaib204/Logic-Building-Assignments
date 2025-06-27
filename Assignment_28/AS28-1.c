#include <stdio.h>
#include <fcntl.h>

int main()
{
  char fname[20] = {'\0'};
  int fd = 0;

  printf("Enter the file name that you want to open:");
  scanf("%s", fname);

  fd = open(fname, O_RDONLY);
  if (fd == -1)
  {
    printf("unable to open");
    return -1;
  }
  else
  {
    printf("file opened succesfully ");
  }
  close(fd);
  return 0;
}
