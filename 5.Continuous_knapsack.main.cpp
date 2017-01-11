#include <iostream> 
#include <vector> 
using namespace std; 
vector <double> c(100); 
vector <double> c1(100); 
vector <double> c2(100); 
void quickSort1(int l, int r){
double x = c1[(r + l) / 2];
int i = l;
int j = r;
while(i <= j){
while(c1[i] < x) 
i++;
while(c1[j] > x) 
j--;
if(i <= j){
swap(c1[i], c1[j]);
i++;
j--;
}
}
if (i<r)
quickSort1(i, r);
if (l<j) 
quickSort1(l, j); 
}
double quickSort(int l, int r){ 
if (r == l) 
return c1[r]; 
else { 
double x = c1[(r + l) / 2]; 
int i = l; 
int j = r; 
while(i <= j){ 
while(c1[i] < x) 
i++; 
while(c1[j] > x) 
j--; 
if(i <= j){ 
swap(c1[i], c1[j]); 
i++; 
j--; 
} 
} 
if (x == c1[r]) 
return c1[r]; 
else 
if (i <= r && x < c1[r]) 
quickSort(i, r); 
} 
} 
double Continuous_knapsack(double v, int n, vector <double> a, vector <double> b){ 
double max; 
double cen = 0; 
int e; 
for (int i = 0; i < n; i++) 
c[i] = b[i]/a[i]; 
c1 = c;
while (v != 0){ 
max = quickSort(0,n-1); 
for (int i = 0; i < n; i++) 
if (max == c[i]) 
e = i; 
if (v != 0){
if (v >= a[e]){ 
v -= a[e]; 
cen += b[e]; 
c2[e] = 1;
} 
else { 
cen += b[e]/a[e]*v; 
c2[e] = v/a[e];
v = 0; 
}
}
for (int i = 0; i < n; i++) 
if (max == c1[i])
c1[i] = 0; 
quickSort1(0,n-1);
} 
return cen; 
} 
int main(){ 
double v; 
int n; 
cin >> v >> n; 
vector <double> a(n); 
vector <double> b(n); 
for (int i = 0; i < n; i++) 
cin >> a[i] >> b[i]; 
cout << Continuous_knapsack(v, n, a, b) << endl; 
for (int i = 0; i < n; i++) 
cout << c2[i] << " ";
return 0;
}
