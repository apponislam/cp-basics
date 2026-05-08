#include <stdio.h>

void array(int a)
{
    for (int i = 1; i < 2 * a; i++)
    {
        int l;

        if (i <= a)
        {
            l = i;
        }
        else
        {
            l = 2 * a - i;
        }

        int spce = a - l;
        int c = 2 * l - 1;

        char sym;
        if (l % 2 == 1)
        {
            sym = '#';
        }
        else
        {
            sym = '-';
        }

        for (int s = 0; s < spce; s++)
        {
            printf(" ");
        }

        for (int j = 0; j < c; j++)
        {
            printf("%c", sym);
        }

        printf("\n");
    }
}

int main()
{
    // hey appon start from here
    int a;
    scanf("%d", &a);

    array(a);

    return 0;
}