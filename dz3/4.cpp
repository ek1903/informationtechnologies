#include <iostream>
using namespace std;
int dig_trench(int n) {
    cin >> n;
    int trench[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            trench[i][j] = abs(i - j);
            cout << trench[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int a;
    cin >> a;
    cout << dig_trench(a);
}
