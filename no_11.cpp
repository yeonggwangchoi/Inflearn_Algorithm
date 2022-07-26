#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int k=0;
	for (int i = 1; i <= N; i++)
	{
		int j = i;
		while (j > 0)
		{
			j = j / 10;
			k++;
		}
	}
	cout << k;
}