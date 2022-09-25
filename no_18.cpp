#include <iostream>
using namespace std;

int main()
{
	int N, M, cnt = 0;
	cin >> N >> M;

	int* num = new int[N];
	int max = 0;
	for (int i = 0; i < N; i++) {
		cin >> num[i];
		if (num[i] > M) {
			cnt++;
			if (max < cnt)
				max = cnt;
		}
		else
		{
			cnt = 0;
		}
	}
	cout << max;
}