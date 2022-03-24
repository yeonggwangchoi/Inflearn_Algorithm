#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	int opmcount = 0, c = 0;
	cin >> s;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if ((int)s[i] - 48 >= 0 && (int)s[i] - 48 <= 9)
		{
			opmcount = opmcount * 10 + (s[i] - 48);
		}
	}
	cout << opmcount << "\n";
	for (int i = 1; i<opmcount ; i++)
	{
		if (opmcount % i == 0)
		{
			c++;
		}
	}
	cout << c;
	
	return 0;
}