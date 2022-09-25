#include <iostream>
using namespace std;

int main()
{
	int N;

	for (int i = 0; i < N; i++) {
		int num1, num2;
		cin >> num1 >> num2;
		int sum = 0;
		for (int j = 1; i <= num1; j++) {
			sum += j;
		}

		if (sum == num2)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}