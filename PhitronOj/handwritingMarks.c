#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a >= -1 && a <= 100)
    {
        int b = a + 5;
        printf("%d", b);
    }
    return 0;
}