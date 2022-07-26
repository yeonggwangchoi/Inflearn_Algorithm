#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	
	int n, a;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		a = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				a++;
		}
		cout << a << " ";
	}
}