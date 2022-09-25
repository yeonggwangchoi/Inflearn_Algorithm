#include <iostream>
using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	int num1[52] = {};
	int num2[52] = {};
	
	if (str1.length() == str2.length()){
		for (auto i = str1.begin(); i < str1.end(); i++) {
			num1[*i - 65]++;
		}
		for (auto i = str2.begin(); i < str2.end(); i++) {
			num2[*i - 65]++;
		}
		bool b = true;
		for (int i = 0; i < 52; i++){
			if (num1[i] != num2[i]) {
				b = false;
				break;
			}
		}
		if (b == true)
			cout << "YES";
		else
			cout << "NO";
	}
	else
	{
		cout << "NO";
	}
}