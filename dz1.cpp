#include <iostream>
using namespace std;
int main() {
  int m, n, a, gcd;
    cin >> m >> n;
    a = m * n;
    while (m != 0 && n !=0) {
        if (m > n) {
            m = m % n;
        } else {
            n = n % m;
        }
    }
    gcd = max(m, n);
    cout << a / gcd;
    return 0;
}
