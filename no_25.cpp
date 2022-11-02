#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v1(n);
	vector<int> v2(n, 1);

	for (int j = 0; j < n; j++) {
		cin >> v1[j];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (v1[i] < v1[j])
				v2[i]++;
		}
	}

	for (auto i : v2)
		cout << i << " ";
}