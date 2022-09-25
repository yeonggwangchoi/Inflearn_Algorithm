#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int* student = new int[N];
	int max = -20000000;
	int c = 0;
	for (int i = 0; i < N; i++) {
		cin >> student[i];
	}

	for (int i = N - 1; i >= 0; i--) {
		if (student[i] > max) {
			max = student[i];
			c++;
		}
	}
	cout << c - 1 << "\n";
}
