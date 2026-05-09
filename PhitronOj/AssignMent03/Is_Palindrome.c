#include <stdio.h>
#include <string.h>

int is_palindrome(char arr[])
{
    int l = strlen(arr);
    for (int i = 0, j = l - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    // hey appon start from here
    char arr[1000];
    scanf("%s", arr);
    if (is_palindrome(arr))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}