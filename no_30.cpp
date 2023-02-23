#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int lt = 1;
	int k = 1;
	int res = 0;

	while (lt!=0)
	{
		lt = N / (k * 10);
		int cur = N % (k * 10);
		int rt = N % k;

		if (cur == 3)
		{
			res += lt * k + rt + 1;
		}
		else if (cur > 3)
		{
			res += (lt + 1) * k;
		}
		else
		{
			res += lt * k;
		}
		k *= 10;
	}
	cout << res;
}