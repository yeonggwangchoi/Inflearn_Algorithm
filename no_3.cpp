#include<iostream>
using namespace std;

int main()
{
	int i, n, s = 0;

	cin >> n;
	cout << '1';
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			cout << '+' << i ;
			s += i;
		}
	}
	cout << '=' << s+1;

	return 0;
}