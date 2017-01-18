#include <iostream>
#include <vector>
using namespace std;
void outer_points(int n, int m){
int a, b;
vector <int> C(m);
vector <int> D(m, n);
for (int i = 0; i < m; i++)
cin >> C[i];
for (int j = 0; j < n; j++){
cin >> a >> b;
for (int i = 0; i < m; i++)
if (C[i]>=a && C[i]<=b)
D[j]--;
}
for (int i = 0; i < m; i++)
cout << D[i] << " ";
}
int main(){
int n, m;
cin >> n >> m;
outer_points(n, m);
return 0;
}
