#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int j;
	for (int i = 1; i < n; i++) {
		int tmp = v[i];
		for (j = i - 1; j >= 0; j--) {
			if (v[j] > tmp)
				v[j + 1] = v[j];
			else
				break;
		}
		v[j + 1] = tmp;
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}

