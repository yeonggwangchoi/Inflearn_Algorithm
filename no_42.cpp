#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary(vector<int>& v, int m, int s) {
	int first = 0, last = s;
	int mid = (first + last) / 2;
	while (v[mid]!=m)
	{
		mid = (first + last) / 2;
		if (v[mid] > m)
			last = mid;
		else
			first = mid;
	}
	return mid;
}

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	for (auto i = 0; i < n; ++i)
		cin >> v[i];
	sort(v.begin(), v.end());

	cout << binary(v, m, n) + 1;
}