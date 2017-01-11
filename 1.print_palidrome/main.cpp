#include <iostream>
#include <cmath>
using namespace std;
void print_palindrom(int n){
	   int number, number_reversed;
     number = pow(10, (n - 1));
     while(number % 9 != 0){ //нахождение первого n-значного числа кратного 9
	   number++;
     }
     for(number; number < pow(10, n); number+=9){ //перечисление всех n-значных числе кратных 9
     int temp = number;
     if (temp % 9 == 0) {
     number_reversed = 0;
     while (temp != 0){ //нахождение числа в обратную сторону
     number_reversed = number_reversed * 10 + temp % 10;
     temp = temp / 10;
     }
     if(number == number_reversed){
     cout << number <<" ";
     }
     }
     }
}
int main() {
	  int n;
	  cin >> n;
    print_palindrom(n);
    return 0;
}
