#include <stdio.h>

void Display(int count, char c)
{
    if (count > 0 && c <= 'Z')   
    {
        printf("%c\t", c);
        Display(count - 1, c + 1);
    }
}

int main()
{
    int no = 0;

    printf("Enter how many characters you want:\n");
    scanf("%d", &no);

    Display(no, 'A');

    return 0;
}