#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> v(N + 1);
	int two = 0, five = 0;
	for (int i = 2; i <= N; i++) {
		int tmp = i;
		int j = 2;
		while (tmp != 1)
		{
			if (tmp % j == 0) {
				tmp = tmp / j;
				if (j == 2)
					two++;
				else if (j == 5)
					five++;
			}
			else
				j++;
		}
	}
	if (two > five)
		cout << five;
	else
		cout << two;
}