#include <stdio.h>

int main()
{
    int r;
    scanf("%d", &r);

    int arr[r][4];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        long long a = arr[i][0];
        long long b = arr[i][1];
        long long c = arr[i][2];
        long long d = arr[i][3];

        long long multiply = b * c * d;

        if (a % multiply == 0)
        {
            printf("%lld\n", a / multiply);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}