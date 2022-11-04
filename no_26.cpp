#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> v1(N);
	vector<int> v2(N, 1);
	for (int i = 0; i < N; i++)
	{
		cin >> v1[i];
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (v1[i] <= v1[j])
				v2[i]++;
		}
	}

	for (auto i : v2)
		cout << i << " ";
}