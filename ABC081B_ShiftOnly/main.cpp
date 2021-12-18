#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> vec(n);
	int i;
	i = 0;
	while (i < n)
		cin >> vec.at(i++);

	int j;
	int count;
	int	odd_flag;

	count = 0;
	odd_flag = 0;
	while (odd_flag == 0)
	{
		j = 0;
		while (j < n)
		{
			if (vec.at(j) % 2 == 0)
				vec.at(j) = vec.at(j) / 2;
			else
			{
				odd_flag = 1;
				break;
			}
			j++;
		}
		if (odd_flag == 0)
			count++;
	}
	cout << count << endl;

	return (0);
}