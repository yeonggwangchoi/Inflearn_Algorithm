#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> v(N + 1, 0);
	for (int i = 2; i <= N; i++) {
		int tmp = i;
		int j = 2;
		while (tmp!=1)
		{
			if (tmp % j == 0) {
				tmp = tmp / j;
				v[j]++;
			}
			else j++;
		}
	}

	for (int i = 2; i <= N; i++) {
		if (v[i] != 0)
			cout << v[i] << " ";
	}
}