#include <iostream>
using namespace std;
void cicl_rebr(int** C, int max, int s, int** &D, int* &E, int &q){
for(int i = 1; i <= max; i++)
if(C[s][i] != 0 && D[s][C[s][i]] != 1){
D[s][C[s][i]] = 1;
D[C[s][i]][s] = 1;
cicl_rebr(C, max, C[s][i], D, E, q);
}
cout « s « " ";
E[q] = s;
q++;
}
int main(){
int n, max = 0, max1 = 0, j = 1, o, q = 0;
cin » n;
int* A = new int[n];
int* B = new int[n];
int* E = new int[n+1];
for(int i = 0; i < n; i++){
cin » A[i] » B[i];
if(max < A[i])
max = A[i];
if(max < B[i])
max = B[i];
}
int* F = new int[max];
for(int i = 0; i < n; i++){
F[A[i]-1]++;
F[B[i]-1]++;
}
for(int i = 0; i < max; i++)
if(F[i] > max1){
max1 = F[i];
o = i+1;
}
int** D = new int*[max];
int** C = new int*[max];
for(int i = 1; i <= max; i++){
C[i] = new int[max];
D[i] = new int[max];
}
for(int i = 1; i <= max; i++)
for(int l = 1; l <= max; l++)
C[i][l] = 0;
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
cicl_rebr(C, max, o, D, E, q);
for(int i = n-1; i >= 0; i--)
cout « E[i] « " ";
return 0;
}
