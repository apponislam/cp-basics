#include <stdio.h>

int count_before_one(int arr[], int a)
{
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == 1)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    return count;
}

int main()
{
    // hey appon start from here
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    int mainCount = count_before_one(arr, a);
    printf("%d", mainCount);

    return 0;
}