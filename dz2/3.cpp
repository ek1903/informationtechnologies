#include <iostream>
using namespace std;
int main () {
    int c=1, n, k=0, j, i;
    cin >> n;
    for (i=0; i<=n; i++) {
        for (j=1;j<=i;j++) {
            if (i % j==0) {
                k++;
                }
            if (k==2 && n % i != 0) {
                c++;
                }
            k=0;
            }
    cout << c;
    return 0;
    }
       
