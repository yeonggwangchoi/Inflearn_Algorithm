#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int N, K;
	cin >> N >> K;
	
	vector<int> a(10);
	int sum = 0, maxsum = 0;
	for (int i = 0; i < N; i++){
		cin >> a[i];
	}
	for (int i = 0; i < K; i++) {
		sum += a[i];
	}
	maxsum = sum;
	for (int i = K; i < N; i++) {
		sum = sum + (a[i] - a[i - K]);

		if (sum > maxsum)
			maxsum = sum;
	}
	cout << maxsum;
}