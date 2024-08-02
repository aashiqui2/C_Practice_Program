#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int left = 0, right = n - 1, mid, pre, nxt;
    if (arr[0] != arr[1])
    {
        printf("%d ", arr[0]);
    }
    else if (arr[n - 1] != arr[n - 2])
    {
        printf("%d ", arr[n - 1]);
    }
    else
    {
        while (left <= right)
        {
            mid = ((right - left) / 2) + left;
            pre = mid - 1;
            nxt = mid + 1;
            if ((arr[pre] != arr[mid]) && (arr[nxt] != arr[mid]))
            {
                printf("%d ", arr[mid]);
                break;
            }
            else if (mid % 2 == 0)
            {
                if (arr[pre] == arr[mid])
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            else
            {
                if (arr[pre] == arr[mid])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
    }
    return 0;
}
