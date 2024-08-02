/*  vowels swapping in the string
INput:  google
Output: geoglo
*/
#include <stdio.h>
#include <string.h>
int isVowel(char ch)
{

    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}
int main()
{
    char str[] = "zoho corporation";
    int len = strlen(str);
    int i = 0;
    int j = len - 1;

    while (i < j)
    {
        while (i < j && !isVowel(str[i]))
        {
            i++;
        }
        while (i < j && !isVowel(str[j]))
        {
            j--;
        }
        if (i < j)
        {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
    }

    printf("%s\n", str);

    return 0;
}

