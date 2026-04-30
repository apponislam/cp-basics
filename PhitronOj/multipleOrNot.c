#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (1 <= 1 && b <= 10000)
    {
        int c = a % b;
        int d = b % a;
        if (c == 0 || d == 0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    return 0;
}