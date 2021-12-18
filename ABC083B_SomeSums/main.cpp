#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n)
{
    int s;
    s = 0;
    if (n >= 10)
        s = digit_sum(n / 10);
    return (s + n % 10);
}

int main()
{
    int n, min, max;
    cin >> n >> min >> max;

    int sum;
    int i;
    int tmp;

    sum = 0;
    i = 1;
    while (i <= n)
    {
        tmp = digit_sum(i);
        if (min <= tmp && tmp <= max)
            sum = sum + i;
        i++;
    }
    cout << sum << endl;
    return (0);
}