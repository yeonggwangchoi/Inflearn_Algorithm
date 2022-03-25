#include <iostream>
using namespace std;

int main()
{
	char s[101], ns[101];
	int p = 0;
	gets_s(s,101);
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			ns[p++] = s[i];
		}
	}
	
}