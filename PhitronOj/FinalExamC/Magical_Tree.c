#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int height = (n + 11) / 2;
    int maxWidth = 2 * height - 1;

    for (int i = 1; i <= height; i++)
    {
        int stars = 2 * i - 1;
        int spaces = (maxWidth - stars) / 2;

        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    int trunkSpaces = (maxWidth - n) / 2;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < trunkSpaces; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}