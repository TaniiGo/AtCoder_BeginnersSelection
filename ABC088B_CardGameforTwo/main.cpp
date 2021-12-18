#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int nums[110];
    int i;
    
    i = 0;
    while (i < n)
        cin >> nums[i++];
    int j, k, tmp;
    j = 0;
    while (j < n - 1)
    {
        k = j + 1;
        while (k < n)
        {
            if (nums[j] < nums[k])
            {
                tmp = nums[j];
                nums[j] = nums[k];
                nums[k] = tmp;
            }
            k++;
        }
        j++;
    }
    int alice, bob, l;

    alice = 0;
    bob = 0;
    l = 0;
    while (l < n)
    {
        if (l % 2 == 0)
            alice = alice + nums[l];
        else
            bob = bob + nums[l];
        l++;
    }
    cout << alice - bob << endl;
    return (0);
}