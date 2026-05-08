#include <stdio.h>

void odd_even()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int odd = 0;
    int even = 0;
    for (int i = 0; i < a; i++)
    {
        // printf("%d ", arr[i]);
        if (arr[i] % 2 == 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    printf("%d %d", odd, even);
}

int main()
{
    // hey appon start from here
    odd_even();
    return 0;
}