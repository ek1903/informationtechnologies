#include <iostream>
using namespace std;
int main() {
    int a, b, h, i;
    h=1;
    cin >> a >> b;
    for (i = 0; i < b; i++)
        {
        h = h * a;
        }
    cout << h << endl;
    return 0;
}
