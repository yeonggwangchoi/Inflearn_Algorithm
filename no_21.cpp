#include <iostream>
using namespace std;

int main()
{
	int* a = new int[10];
	int* b = new int[10];
	int suma = 0, sumb = 0;
	char last = ' ';
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]) {
			suma += 3;
			last = 'A';
		}
		else if (a[i] < b[i]) {
			sumb += 3;
			last = 'B';
		}
		else {
			suma += 1;
			sumb += 1;
		}
	}
	if (suma == 10 && sumb == 10) {
		cout << suma << " " << sumb << "\n";
		cout << "D";
	}
	else {
		if (suma > sumb) {
			cout << suma << " " << sumb << "\n";
			cout << "A";
		}
		else if (suma < sumb) {
			cout << suma << " " << sumb << "\n";
			cout << "B";
		}
		else {
			cout << suma << " " << sumb << "\n";
			cout << last;
		}
	}
		
}