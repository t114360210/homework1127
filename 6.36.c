#include <stdio.h>
#include <stdlib.h>

void stringReverse(const char s[]);

int main(void)
{
    char str[80];
    printf("Enter a string: ");
    fgets(str, 80, stdin);
    printf("Reversed: ");
    stringReverse(str);
    printf("\n");
    system("pause");
    return 0;
}

void stringReverse(const char s[])
{
    if (s[0] == '\0' || s[0] == '\n')
        return;
    stringReverse(s + 1); 
    putchar(s[0]);              
}