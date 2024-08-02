#include <stdio.h>
#include<string.h>
int main()
{
    char s1[20], s2[10];
    int c = 0, i, j;
    printf("Enter the string  s1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter the string  s2: ");
    fgets(s2, sizeof(s2), stdin);

    // Remove the newline character from s1 if it exists
    s1[strcspn(s1, "\n")] = '\0';

    // Remove the newline character from s2 if it exists
    s2[strcspn(s2, "\n")] = '\0';

    for (i = 0; s1[i] != '\0'; i++)
    {
        c++;
    }
    for (i = c, j = 0; s2[j] != '\0'; i++, j++)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("%s", s1);
    return 0;
}