#include <iostream>
using namespace std;

int digit_sum(int x)
{
	int sum = 0;
	sum += x / 10000000 + x % 10000000 / 1000000 + x % 1000000 / 100000 + x % 100000 
		/ 10000 + x % 10000 / 1000 + x % 1000 / 100 + x % 100 / 10 + x % 10;
	return sum;
}

int main()
{
	int N;
	cin >> N;
	
	int* pnum = new int[N];
	int num, max = -2147000000, maxnum = -2147000000;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		pnum[i] = digit_sum(num);
		if (pnum[i] > max)
		{
			max = pnum[i];
			maxnum = num;
		}
		else if (pnum[i] == max)
		{
			if (maxnum < num)
				maxnum = num;
			max = pnum[i];
		}
	}
	cout << maxnum;
}