#include <stdio.h>
void least_common_multiple(int, int);
void greatest_common_multiple(int, int);
void square_root(int);
void prime_number(int);
void prime_number_range(int, int);
void prime_factor(int);
int main()
{
    // least_common_multiple(3, 9);
    // greatest_common_multiple(60,120);
    // square_root(16);
    // prime_number_range(400, 562);
    // prime_factor(29);//45,29
    return 0;
}
void least_common_multiple(int a, int b)
{
    int max = a > b ? a : b;
    int last;
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            last = max;
            printf("%d", last);
            break;
        }
        max++;
    }
}
void greatest_common_multiple(int a, int b)
{
    // int small = a < b ? a : b;
    // int last;
    // for (int div = 2; div <= small; div++)
    // {
    //     if (a % div == 0 && b % div == 0)
    //     {
    //         last = div;
    //     }
    // }
    // printf("%d\n", last);

    //? Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d",a);
    
}
void square_root(int n)
{
    for (int div = 2; div < n / 2; div++)
    {
        if (n / div == div)
        {
            printf("%d\n", div);
        }
    }
}
void prime_number_range(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        int count = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count = 0;
                break;
            }
        }
        if (count)
        {
            printf("%d ", i);
        }
    }
}
void prime_factor(int n) {
   
    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }

  
    for (int i = 3; i*i<= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    if (n > 2) {
        printf("%d ", n);
    }
}


