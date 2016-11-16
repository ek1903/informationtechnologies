#include <iostream>
#include <cmath>
using namespace std;
int proper_fraction(int n) {
	int k = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
    	int temp1 = n, temp2 = i;
    	while (temp2 != 0) {
            int c = temp1 % temp2;
            temp1 = temp2;
            temp2 = c;
        }
        if(temp1 > 1) {
        	k++;
        }
    }
    cout << k * 2;
}
int main() {
    int a;
    cin >> a;
    proper_fraction(a);
}
