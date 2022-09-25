#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int* a = new int[N];
	int* b = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < N; i++) {
		if (a[i] == 1) {
			if (b[i] == 1)
				cout << "D\n";
			else if (b[i] == 2)
				cout << "B\n";
			else
				cout << "A\n";
		}
		else if (a[i] == 2) {
			if (b[i] == 1)
				cout << "A\n";
			else if (b[i] == 2)
				cout << "D\n";
			else
				cout << "B\n";
		}
		else if (a[i] == 3) {
			if (b[i] == 1)
				cout << "B\n";
			else if (b[i] == 2)
				cout << "A\n";
			else
				cout << "D\n";
		}
	}
}