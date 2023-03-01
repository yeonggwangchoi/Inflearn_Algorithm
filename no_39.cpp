#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num1, num2;

	cin >> num1;
	vector<int> v1(num1);
	for (auto i = v1.begin(); i < v1.end(); i++)
		cin >> *i;
	cin >> num2;
	vector<int> v2(num2);
	for (auto i = v2.begin(); i < v2.end(); i++)
		cin >> *i;

	vector<int> v(v1.size() + v2.size());

	auto p1 = v1.begin();
	auto p2 = v2.begin();
	auto p3 = v.begin();

	for (auto i = 0; i < v.size(); i++) {
		if (p1 == v1.end()) {
			*p3 = *p2;
			p2++;
			p3++;
		}
		else if(p2 == v2.end()) {
			*p3 = *p1;
			p1++;
			p3++;
		}
		else {
			if (*p1 < *p2) {
				*p3 = *p1;
				p1++;
				p3++;
			}
			else {
				*p3 = *p2;
				p2++;
				p3++;
			}
		}
	}
	for (auto i = v.begin(); i < v.end(); i++) {
		cout << *i << " ";
	}
}