#include <bits/stdc++.h>
using namespace std;

int ft_strlen(string str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

string ft_rev_string(string str)
{
    int len = ft_strlen(str);
    int times = len / 2;
    int i;

    i = 0;
    char tmp;
    while (i < times)
    {
        tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
        i++;
    }
    return (str);
}

int main()
{
    string S;

    cin >> S;
    S = ft_rev_string(S);
    
    string divide[4] = {"dream", "dreamer", "erase", "eraser"};
    int i = 0;

    while (i < 4)
    {
        divide[i] = ft_rev_string(divide[i]);
        i++;
    }

    int isDivided;
    int j;
    int k;
    i = 0;
    while (i < ft_strlen(S))
    {
        isDivided = 0;
        j = 0;
        while (j < 4)
        {
            k = 0;
            while (S[i + k] && S[i + k] == divide[j][k])
            {
                k++;
            }
            if (k == ft_strlen(divide[j]))
            {
                i = i + k;
                isDivided = 1;
                break;
            }
            j++;
        }
        if (isDivided == 0)
            break;
    }
    if (isDivided)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return (0);
}