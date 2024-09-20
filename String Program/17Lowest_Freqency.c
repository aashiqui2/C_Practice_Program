//!  C program to find minimum occurring character in a string
#include <stdio.h>
#include <limits.h>
#include <ctype.h>
int main()
{
    char c[] = "i love codeforwin";
    int freq[256] = {0};

    for (int i = 0; c[i] != '\0'; i++)
    {
        if (isalpha(c[i]))
        {
            freq[(unsigned char)c[i]] += 1;
        }
    }
    int min = INT_MAX;
    char find = '\0';
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0 && freq[i] < min)
        {
            min = freq[i];
            find = i;
            break;
        }
    }
    printf("Mnimum occurring character is '%c' = %d times.", find, min);
    return 0;
}