#include <iostream>
#include <vector>
using namespace std;
void incredible_sort(int n, int k) {
     vector <int> numbers(k); //вектор с k элементами
     for (int i = 0; i < n; i++) { //элементы вектора под номерами на единицу меньше числа из вводимой последовательности увеличиваются на единицу
          int cur_numb;
          cin >> cur_numb;
          numbers[cur_numb - 1]++;
     }
     for (int i = k - 1; i >= 0; i--) { //в созданном векторе, начиная с последнего элемента(т.к. невозрастание) в консоль выводятся номера элементов, увеличенные на единицу(number[i] раз: если элемент равен 0, то ничего не выводится)
          if (numbers[i] != 0) {
              for (int k = 0; k < numbers[i]; k++) {
                   cout << i + 1 << " ";
              }
          }
     }
}
int main() {
    int n, k;
    cin >> n >> k;
    incredible_sort(n, k);
    return 0;
}
