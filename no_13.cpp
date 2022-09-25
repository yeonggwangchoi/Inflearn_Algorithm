#include <iostream>
using namespace std;

int main()
{
	int digit[10] = {};
	char str[101];
	cin >> str;

	for (int i = 0; str[i] != '\0'; i++)
	{
		digit[str[i] - 48]++;
	}
	int max = -200000000;
	for (int i = 0; i < 10; i++)
	{
		if (digit[i] > max)
		{
			max = i;
		}
	}
	int maxint = -1;
	for (int i = 0; str[i]!='\0'; i++)
	{
		if (max == str[i] - 48)
		{
			if (maxint < str[i] - 48)
			{
				maxint = str[i] - 48;
			}
		}
	}
	cout << maxint;
}