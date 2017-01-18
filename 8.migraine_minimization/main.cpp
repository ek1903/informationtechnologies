#include <iostream>
#include <cmath>
using namespace std;
void migraine_minimization(int n){
	   int square, number = 0;
     while (n > 0){
		       square = (int)sqrt(n);
		       n-=square*square;
		       number++;
   	}
  	cout << number * 4;
}
int main(){
	int n;
	cin >> n;
	Migraine_minimization(n);
	return 0;
  }
