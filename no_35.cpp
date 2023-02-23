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

	for (auto i = 0; i < n; i++) {
		if (v[i] < 0) {
			for (auto j = i; j > 0; j--) {
				if (v[j-1] < 0) {
					
					break;
				}
				else
				{
					int tmp = v[j];
					v[j] = v[j - 1];
					v[j - 1] = tmp;
				}
					
			}
		}
	}

	for (auto i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}