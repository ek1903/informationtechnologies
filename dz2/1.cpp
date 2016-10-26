#include <iostream>
using namespace std;
double binpow (double a, int n) {
	if (n < 0) return 1 / binpow (a, -n);
	if (n == 0)
		return 1;
	if (n % 2 == 1)
		return binpow (a, n-1) * a;
	else {
		int b = binpow (a, n/2);
		return b * b;
	}
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << binpow(a, b);
	return 0;
}
