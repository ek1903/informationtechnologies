#include <iostream>
using namespace std;
int main() {
  int m, n, a;
    cin >> m >> n;
    a = m * n;
    while (m != n) {
        if (m > n) {
            m = m % n;
        } else {
            n = n % m;
        }
    }
    cout << a / m;
    return 0;
}
