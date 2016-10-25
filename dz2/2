#include <iostream>
#include <vector>
using namespace std;
int main () {
    int  n, j, i;
    cin >> n;
    vector <int> a(n);
    for (i = 0; i <= n; i++) {
         a[i]=1;
         }
    for (i = 2; i < n; i++) {
        if (a[i] == 1)  {
               for (j = i; j < n; j += i) {
                         a[j] = 0;
                         }
               a[i] = 1; 
        }
    for (int i = 2; i < n; i++) {
         if (a[i] == 1) {
             cout << i << " ";
             }
    }        
    return 0;
    }
