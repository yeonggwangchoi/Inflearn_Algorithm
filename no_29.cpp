#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		int tmp = i;
		while (tmp!=0) {
			if (tmp % 10 == 3)
				cnt++;
			tmp = tmp / 10;
		}
	}
	cout << cnt;
}