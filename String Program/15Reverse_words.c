#include <stdio.h>
#include <string.h>

int main()
{
    char c[] = "hello world";
    int len = strlen(c);
    char temp[100];
    int i = len - 1;
    int j = len - 1;
    int k = 0;

    while(j >= 0)
    {

        while(i >= 0 && c[i] != ' ')
        {
            i--;
        }

        for(int m = i + 1; m <= j; m++)
        {
            temp[k] = c[m];
            k++;
        }
        if(i > 0)
        {
            temp[k] = ' ';
            k++;
        }

        j = i - 1;
        i = j;
    }
    temp[k] = '\0';
    puts(temp);

    return 0;
}
