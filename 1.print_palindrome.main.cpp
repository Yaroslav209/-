#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
bool palindrom(int a){
	// является ли число палиндромом?
	int n=1;
	while( a > pow(10, n))
	n++;
  // n-длина числа a
	vector <int> numeral(n);
	vector <int> numeral2(n);
  // вектор numeral- цифры числа a
	int i = 1;
	while(!(a / pow(10,i) == 0)){
		int temp = (a / pow(10,i - 1))% 10;
		numeral.push_back(temp);
		numeral2.push_back(temp);
		i++;
	}
	bool result = 1;
	reverse(numeral.begin(), numeral.end());
	for(int j = 0; j < n; j++){
		if(!(numeral[j] == numeral2[j]))
		result = 0;
	}
	return result;
}
void print_palindrom(int n){
	for(int i = pow(10, n)+ 8; i < pow(10, n + 1); i += 9){
		if(palindrom(i))
		cout << i;
	}
}
int main(){
	int n;
	cin >> n;
	print_palindrom(n);
	return 0;
}
