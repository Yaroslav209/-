#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void incredible_sort(int N, int k){
	vector <int> A(N);
	for(int i = 0; i < N; i++)
	cin >> A[i];
	sort(A.begin(), A.end());
	reverse(A.begin(), A.end());
	for(int j = 0; j < N; j++)
	cout << A[j]<< " ";
}
int main(){
	int N, k;
	cin>> N >> k;
	incredible_sort(N, k);
	return 0;
}
