#include <stdio.h>

int main()
{
    // hey appon start from here
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int s = 1; s <= a - i; s++)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
