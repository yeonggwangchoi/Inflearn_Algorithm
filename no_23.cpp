#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<int> v(N);
	int c = 1;
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	int max = 0;
	for (int i = 1; i < N; i++) {
		if (v[i] == v[i - 1])
			c++;
		else if (v[i] > v[i - 1])
			c++;
		else
			c = 1;
		if (max < c)
			max = c;
	}
	cout << max;
}