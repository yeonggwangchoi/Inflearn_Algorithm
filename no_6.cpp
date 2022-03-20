#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char s[51]={0};
	string nums;
	cin >> s;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] - 48 >= 0 && s[i] - 48 <= 9)
		{
			nums = s[i];
		}
	}
}