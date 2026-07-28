#include <bits/stdc++.h>
using namespace std;

int getValue(char ch)
{
    if (ch == 'I')
        return 1;
    if (ch == 'V')
        return 5;
    if (ch == 'X')
        return 10;
    if (ch == 'L')
        return 50;
    if (ch == 'C')
        return 100;
    if (ch == 'D')
        return 500;
    if (ch == 'M')
        return 1000;

    return 0;
}

int main()
{
    string roman;
    cin >> roman;

    int result = 0;

    for (int i = 0; i < roman.length(); i++)
    {
        int current = getValue(roman[i]);

        if (i + 1 < roman.length() &&
            current < getValue(roman[i + 1]))
        {
            result -= current;
        }
        else
        {
            result += current;
        }
    }

    cout << result << endl;

    return 0;
}