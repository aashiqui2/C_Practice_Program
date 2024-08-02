#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int c = 0;

    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        c++;
    }
    printf("String reverse");
    for (int i = c;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}