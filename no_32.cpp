#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n - 1; i++) {
		int min=v[i];
		int minidx=i;

		for (int j = i + 1; j < n; j++) {
			if (min > v[j]) {
				min = v[j];
				minidx = j;
			}
		}

		v[minidx] = v[i];
		v[i] = min;
	}

	for (int i = 0; i < n; i++)
	{
		cout << v[i] <<" ";
	}
}