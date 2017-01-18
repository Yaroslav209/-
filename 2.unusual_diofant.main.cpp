#include <iostream>
#include <cmath>
using namespace std;
bool endless(int a, int b, int c){
	// бесконечность корней
	if(a == c ==0)
	return 1;
	else if (b == c == 0)
	return 1;
	else if(a * b < 0 && c % 2 ==0)
	return 1;
	else if( a * b < 0 && c % 2 == 1 &&(b % 2 ==1))
	return 1;
	else if( a* b < 0 && c % 2 == 1 &&(a % 2 == 1))
	return 1;
	else return 0;
}
bool radicalless(int a, int b, int c){
// отсутствие корней
if( a * b > 0 && b > 0 && c < a + b)
return 1;
else if(a * b > 0 && a < 0 && c > a + b)
return 1;
else if(a == b == 0 && c != 0)
return 1;
else if( a % 2 == 0 && b % 2 ==0 && c % 2 == 0)
return 1;
}
void unusual_diofant(int a, int b, int c){
	int x, int y;
	if (redicalless(a,b,c))
	cout << "none";
	if(endless(a,b,c))
	cout << "inf";
	bool radical = a*x + b*y == c;
	for( x = 0, x <= copysign(c,1), x++){
		for( y = 0, y <= copysign(c,1), y++ ){
			if(radical)
			cout << x << y << endl;
		}
	}
}
int main() {
	int a, int b, int c;
	unusual_diofant(a,b,c);
	return 0;
}
