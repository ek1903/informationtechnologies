#include <iostream>
using namespace std;
int main() {
    int n, m, c = 1;
    cin >> n >> m;
    int** snake = new int*[n];
    for(int i = 0; i < n; ++i) {
          snake[i] = new int[m];
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j < m; j++) {
                snake[i][j] = c;
                c++;
            }
        } else { 
            for (int j = m - 1; j >= 0; j--) {
                snake[i][j] = c;
                c++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << snake[i][j] << '\t' ;
        }
        cout << endl;
    }      
    return 0;
}
