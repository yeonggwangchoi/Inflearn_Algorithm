#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> v1(N);
	vector<int> v2;

	for (int i = 0; i < N; i++) {
		cin >> v1[i];
		if (i > 0)
			v2.push_back(abs(v1[i] - v1[i - 1]));
	}

	sort(v2.begin(), v2.end());

	bool tf = true;

	for (int i = 1; i < N; i++) {
		if (i != v2[i - 1])
			tf = false;
	}

	if (tf == true)
		cout << "YES";
	else
		cout << "NO";
}