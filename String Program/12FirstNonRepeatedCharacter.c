#include <stdio.h>
#include <string.h>

#define CHAR_COUNT 256

int main()
{
    char str[100];
    int count[CHAR_COUNT] = {0};
    int i;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    // char a[] = "hello";
    // printf("%d", *(&a + 1) - a); // same as sizeof()
    
    for (i = 0; str[i] != '\0'; i++)
    {
        count[(unsigned char)str[i]]++;
    }

    // Find the first character with a count of 1
    for (i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] == 1)
        {
            printf("The first non-repeated character is: %c\n", str[i]);
            return 0;
        }
    }
    printf("All characters are repeated or the string is empty.\n");
    return 0;
}
