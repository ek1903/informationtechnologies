#include <iostream>
#include <algorithm>
using namespace std;
void min_puti(int** C, int max, int s, int s1, int** &F, int p){
if(F[s][s1] > p){
F[s][s1] = p;
F[s1][s] = p;
}
else return;
for(int i = 1; i <= max; i++)
if(C[s1][i] != 0)
min_puti(C, max, s, C[s1][i], F, p+1);
}
int main(){
int n, max = 0, j = 1, s, f;
cin » n » s » f;
int* A = new int(n);
int* B = new int(n);
for(int i = 0; i < n; i++)
cin » A[i] » B[i];
for(int i = 0; i < n; i++){
if(max < A[i])
max = A[i];
if(max < B[i])
max = B[i];
}
int** C = new int*[max];
int** F = new int*[max];
for(int i = 1; i <= max; i++){
C[i] = new int(max);
F[i] = new int(max);
}
for(int t = 1; t <= max; t++)
for(int i = 1; i <= max; i++)
F[t][i] = max*(max-1)/2+1;
for(int t = 1; t <= max; t++){
for(int i = 0; i < n; i++){
if(A[i] == t){
C[t][j] = B[i];
j++;
}
if(B[i] == t){
C[t][j] = A[i];
j++;
}
}
j = 1;
}
for(int i = 1; i <= max; i++){
for(int l = 1; l <= max; l++)
if(C[i][l] != 0)
cout « C[i][l] « " ";
cout « endl;
}
if(s > max || f > max)
cout « "no way";
else{
min_puti(C, max, s, s, F, 0);
if(F[s][f] < max*(max-1)/2+1)
cout « F[s][f];
else cout « "no way";
}
return 0;
}
