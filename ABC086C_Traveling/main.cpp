#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    
    cin >> N;

    bool can = true;
    int nowt = 0, nowx = 0, nowy = 0;
    int i = 0;

    while (i < N)
    {
        int t, x, y;

        cin >> t >> x >> y;
        while (nowt < t)
        {
            if (nowx != x)
            {
                nowx += (nowx < x ? 1 : -1);
                cout << nowt << "nowx:" << nowx << endl;
            }
            else
            {
                nowy += (nowy < y ? 1 : -1);
                cout << nowt << "nowy:" << nowy << endl;
            }
            nowt++;
        }
        if (nowx != x || nowy != y)
            can = false;
        i++;
    }

    cout << (can ? "Yes" : "No") << endl;
    return (0);
}