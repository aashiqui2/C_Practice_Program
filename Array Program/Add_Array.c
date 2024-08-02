#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 2, 2};
    int b[] = {2, 2, 2, 2, 2};
    int len1 = sizeof(a) / sizeof(a[0]);
    int len2 = sizeof(b) / sizeof(b[0]);
    int large = len1 > len2 ? len1 : len2;
    int small = len1 < len2 ? len1 : len2;
    int c[large];
    for (int i = 0; i < small; i++)
    {
        c[i] = a[i] + b[i];
    }
    if (len1 > len2)
    {
        for (int i = small; i < large; i++)
        {
            c[i] = a[i];
        }
    }
    else if (len1 < len2)
    {
        for (int i = small; i < large; i++)
        {
            c[i] = b[i];
        }
    }
    for (int i = 0; i < large; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}