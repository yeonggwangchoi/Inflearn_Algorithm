#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
	}
	
	s.erase(remove(s.begin(), s.end(), ' '), s.end());
	cout << s;
}