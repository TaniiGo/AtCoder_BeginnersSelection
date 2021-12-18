#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, Y;
	
	cin >> N >> Y;
	int yukichi;
	int ichiyo;
	int hideyo;
	int sum;

	yukichi = 0;
	hideyo = 0;
	while (yukichi <= N)
	{
		ichiyo = 0;
		while (yukichi + ichiyo <= N)
		{
			hideyo = N - (yukichi + ichiyo);
			sum = 10000 * yukichi + 5000 * ichiyo + 1000 * hideyo;
			if (sum == Y)
			{
				cout << yukichi << " " << ichiyo << " " << hideyo << endl;
				return (0);
			}
			ichiyo++;
		}
		yukichi++;
	}
	cout << "-1 -1 -1" << endl;
	return (0);
}