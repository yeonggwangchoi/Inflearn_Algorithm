#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<int> v(n);
	for (auto i = 0; i < n; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < n - 1; i++) {
		int max = v[i];
		int maxidx = i;

		for (int j = i + 1; j < n; j++) {
			if (max < v[j]) {
				max = v[j];
				maxidx = j;
			}
		}
		v[maxidx] = v[i];
		v[i] = max;
	}
	int last = v[0];
	int k = 0;
	int third = 0;

	for (auto i = 0; i < n; i++) {
		if (last > v[i]) {
			k++;
			if (k == 3)
				third = v[i];
		}
	}
	cout << third;
}