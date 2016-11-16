#include <iostream>
using namespace std;
int delete_annoying_primes(int n) {
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) { //считывание массива
    	cin >> array[i];
    }
    for (int i = 0; i < n; i++) { //выведение первоначального масива в консоль
        cout << array[i] << " ";
    }
    int c = 0;
    for (int i = 0; i < n - c; i++) {
    	for (int j = 0; j < n - c; j++) {
    		if (array[i] == array[j] && i != j) { //нахождение повторяющихся элементов
    			int x = array[i];
    			int m = 0;
    			for (int y = array[i] - 1; y > 1; y--) { //вычисление является ли повторяющееся число простым
    				if (x % y != 0) {
    					m++;
    				}
    		    }
    		    if (m == array[i] - 2) {
    					for(int k = i + 1; k < n - c; k++) {
    						array[k - 1] = array[k];
    					}
    					for (int l = j + 1; j < n - c; j++) {
    						array[l - 1] = array[l];
    					}
    					c += 2;
    				}
    			}
    		}
    	}
    for (int i = 0; i < n - c; i++) {
        cout << array[i] << " ";
    }
}
int main() {
    int a;
    cin >> a;
    delete_annoying_primes(a);
    
}
