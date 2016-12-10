#include <iostream>
using namespace std;
void quicksort(int l, int r, double *a)
{
	int i = l;
	int j = r;
    double p = a[i + (j - i) / 2];
    while(i <= j)
    {
        while(a[i] < p) i++;
        while(a[j] > p) j--;
        if(i <= j)
        {
            swap(a[i++], a[j--]);
        }
    }
    if(l < j){
         quicksort(l, j, a);
    }
    if(r > i){
    	quicksort(r, i, a);
    }
}    
int main()
{
	int n, k;
	cin >> n >> k;
	double *a = new double[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    quicksort(0, n-1, a);
    cout << a[k];
    return 0;
}
