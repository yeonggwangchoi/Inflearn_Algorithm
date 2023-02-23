#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int* num = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (num[j] > num[j + 1]) {
				int tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << num[i] << " ";
	}
}