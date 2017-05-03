#include <iostream>
#include <stdlib.h>
using namespace std;
void stoogesort(int l, int r, int* &A){
  if(A[l] > A[r])
    swap(A[l], A[r]);
  if(r-l > 2){
    int s = (r - l)/3;
    stoogesort(l, r-s, A);
    stoogesort(l+s, r, A);
    stoogesort(l, r-s, A);
  }
}
int main(){
  int n;
  cin >> n;
  int* A = new int[n];
  for(int i = 0; i < n; i++)
    A[i] = rand()%100;
  stoogesort(0, n-1, A);
  for(int i = 0; i < n; i++)
    cout << A[i] << endl;
  return 0;
}
