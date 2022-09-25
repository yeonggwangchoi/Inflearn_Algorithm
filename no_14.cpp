#include <iostream>
using namespace std;

int reverse(int x) {
	int res = 0;
	int tmp;
	while (x>0){
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}
	return res;
}

bool isPrime(int x) {
	
	if (x == 1) return false;
	bool flag = true;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main()
{
	int N, num, tmp;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> num;
		tmp = reverse(num);

		if (isPrime(tmp)) cout << tmp << " ";
	}

}