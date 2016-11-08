#include <iostream>
using namespace std;
int strange_multiply(int number, int multiplier) {
    int result = 0;
    for (int i = 0; i < multiplier; i++) {
        result = result + number;
        }
    return result;
}
int main () {
     int output, a, b;
     cin >> a >> b;
     output = multiply(a,b);
     cout << output;
     return 0;
}
      
