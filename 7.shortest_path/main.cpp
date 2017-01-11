#include <iostream>
using namespace std;
double min(double a, double b){
	if (a >= b){
		return b;
	}
	return a;
}
double length(int i, int j, double **crossroad, bool **park){
	if (crossroad[i][j] != -1) {
		 return crossroad[i][j];
  } else { if (park[i][j] == 1) {
		crossroad[i][j] = min(min(length(i - 1, j, crossroad, park), length(i, j - 1, crossroad, park)) + 100, length(i - 1, j - 1, crossroad, park) + 141.4213);
		return crossroad[i][j];
	    }
	}
	crossroad[i][j] = min(length(i - 1, j, crossroad, park), length(i, j - 1, crossroad, park)) + 100;
	return crossroad[i][j];
}
void shortest_path(int n, int m){
	double **crossroad = new double*[n + 1];
	bool **park = new bool*[n + 1];
	for (int k = 0; k < n + 1; k++){
		park[k] = new bool[m + 1];
		crossroad[k] = new double[m + 1];
	}
	for (int i = 0; i < m + 1; i++) {
		for (int j = 0; j < n + 1; j++) {
			park[j][i] = false;
			crossroad[j][i] = -1;
			crossroad[j][0] = 100 * j;
		}
		crossroad[0][i] = 100 * i;
	}
	int number;
	cin >> number;
	for (int i = 0; i < number; i++){
		int n_i, m_i;
		cin >> n_i >> m_i;
		park[n_i][m_i] = true;
	}
	cout << (int)(length(n, m, crossroad, park) + 0.5);
}
int main(){
	int n, m;
	cin >> n >> m;
	shortest_path(n, m);
	return 0;
}
