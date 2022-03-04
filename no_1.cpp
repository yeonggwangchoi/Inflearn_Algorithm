#include<iostream>
using namespace std;

int main()
{
	int n, m, s = 0;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		if (i % m == 0)
		{
			s += i;
		}
	}
	cout << s;

	return 0;
}