#include <iostream>
using namespace std;
int Exponentiation(int a, int b){
int c = a;
for(int i = 1; i <= b; i++)
a = a * c;
return a;
}
int main(){
int p = 457;
int q = 563;
int n = q * p;
int fe = (p - 1) * (q - 1);
int e = 17;
int d = 1;
bool a = (d*e) % fe == 1;
while(!a){
d += 1;
}
// key creating is completed
int message;
cin >> message;
int c = Exponentiation(message,n) % n;
message = Exponentiation(c,d) % n;
cout << message;
return 0;
}

