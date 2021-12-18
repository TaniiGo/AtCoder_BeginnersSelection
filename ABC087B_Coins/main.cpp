#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    int x;

    cin >> a >> b >> c >> x;

    int i, j, k, count;
    i = 0;
    count = 0;
    while (i <= a)
    {
        j = 0;
        while (j <= b)
        {
            k = 0;
            while (k <= c)
            {
                if (i * 500 + j * 100 + k * 50 == x)
                    count++;
                k++;  
            }
            j++;
        }
        i++;
    }
    cout << count << endl;
    return (0);
}