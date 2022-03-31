#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	string s = { 0 };
	int a = 0, open = 0, close = 0;

	cin >> s;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 40)
		{
			a++;
			open++;
		}
		if (s[i] == 41)
		{
			a--;
			close++;
		}
		if (close > open)
			break;
	}

	if (a == 0)
		cout << "YES";
	else
		cout << "NO";
}