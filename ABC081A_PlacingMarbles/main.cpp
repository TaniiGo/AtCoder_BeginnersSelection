#include <iostream>
#include <string>
using namespace std;

int main()
{
	string	s;
	cin >> s;
	int i;
	int	count;

	i = 0;
	count = 0;
	while (i < 3)
	{
		if (s[i++] == '1')
			count++;
	}
	cout << count << endl;
	return (0);
}