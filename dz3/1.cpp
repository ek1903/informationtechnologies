#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr = new int [n];
    for (int i=0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if (arr[i] == arr[j] ) {
            	if (j == n - 1){n -= 1;} else {
                    for(int l = j; l < n; l++){
                    arr[l] = arr[l + 1];
                    }
                    n -= 1;
                }
            }
        }
   }
   for(int i=0; i < n; i++){
    cout<< arr[i] << " ";
   }
   delete [] arr;
   return 0;
}
