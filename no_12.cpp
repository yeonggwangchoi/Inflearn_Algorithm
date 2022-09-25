#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int sum = 0, count = 1, digit = 9, res = 0;
	while (sum+digit<N)
	{
		res += count * digit;
		sum = sum + digit;
		digit *= 10;
		count++;
	}
	res = ((N - sum) * count) + res;
	cout << res;
}