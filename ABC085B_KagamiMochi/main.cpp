#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	int N;
	cin >> N;

	int nums[110];
	int i;

	i = 0;
	while (i < N)
		cin >> nums[i++];
	
	i = 0;
	int	j;
	int	tmp;
// まずは小さい順に配列をソート
	while (i < N - 1)
	{
		j = i + 1;
		while (j < N)
		{
			if (nums[i] > nums[j])
			{
				tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
			j++;
		}
		i++;
	}
	int newarry[110];
	int	k;
// 今の箱と一つ前の箱が同じなら、新しい配列には追加しない。　＞　配列の重複を削除
	newarry[0] = nums[0];
	k = 1;
	i = 1;
	while (i < N)
	{
		if (nums[i] != nums[i - 1])
		{
			newarry[k++] = nums[i];
		}
		i++;
	}
	cout << k << endl;
	return (0);
}