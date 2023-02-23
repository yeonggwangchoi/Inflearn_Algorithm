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

	for (auto i = 0; i < n-1; i++) {
		for (auto j = 0; j < n - i -1; j++) {
			if (v[j] > 0 && v[j + 1] < 0) {
				int tmp = v[j + 1];
				v[j + 1] = v[j];
				v[j] = tmp;
			}
		}
	}

	for (auto i : v)
		cout << i;
}