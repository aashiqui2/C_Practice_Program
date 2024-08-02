#include <stdio.h>

int main()
{
    char input[] = "123";
    int count = 0;

    for (int i = 0; input[i] != '\0'; i++)
    {
        count = count * 10 + (input[i] - '0');
        printf("Current count after processing %c: %d\n", input[i], count);
    }

    return 0;
}
