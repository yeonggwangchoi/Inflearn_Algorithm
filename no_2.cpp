#include<iostream>
using namespace std;

int main()
{
	int i, a, b, s = 0;

	cin >> a >> b;
	for (i = a; i < b; i++)
	{
		cout << i << "+";
		s += i;
	}
	s += i;
	cout << i;
	cout << "=" << s << endl;

	return 0;
}