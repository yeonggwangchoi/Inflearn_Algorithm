#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int a, b;

	cin >> a;
	vector<int> va(a);
	for (auto i = 0; i < a; ++i)
		cin >> va[i];

	cin >> b;
	vector<int> vb(b);
	for (auto i = 0; i < b; ++i)
		cin >> vb[i];

	sort(va.begin(), va.end());
	sort(vb.begin(), vb.end());

	vector<int> v;

	if (va.size() > vb.size()) {
		auto p1 = vb.begin();
		auto p2 = va.begin();
		while(p1!=vb.end() && p2!=va.end()){
			if (*p1 == *p2) {
				v.push_back(*p1);
				p1++;
				p2++;
			}
			else if (*p1 > *p2)
				p2++;
			else
				p1++;
		}
	}
	else {
		auto p1 = va.begin();
		auto p2 = vb.begin();
		while (p2 != vb.end() && p1 != va.end()) {
			if (*p1 == *p2) {
				v.push_back(*p1);
				p1++;
				p2++;
			}
			else if (*p1 > *p2)
				p2++;
			else
				p1++;
		}
	}
	
	for (auto i = v.begin(); i < v.end(); ++i)
		cout << *i << " ";
}