#include <iostream>
using namespace std;
class Vector{
int* vector;
int number , end;
public:
Vector(int i){
vector = new int[i];
number = i;
end = 0;
}
void add_an_element(int y){
int* vector1 = new int[y];
for(int n = 0; n < y; n++)
vector1[n] = vector[n];
vector = vector1;
}
void push(int x){
bool a = (number < end);
if(a){
add(number*2);
number *= 2;
}
vector[end] = x;
end += 1;
}
int size_for_now = end;
void find_an_element(int y){
int n = 0;
bool a = (y != vector[n]) && (vector[n+1] != '\0');
while(a){
n += 1;
}
if(y == vector[n])
cout << "Here it is " << n;
else
cout << "Not found"ж
}
void delete_an_element(int x){
for(int i = 0; i < end; i++){
if(vector[i] = x){
for(int n = i; n + 1 < end; n++)
vector[n] = vector[n+1];
vector[end] = '\0';
end -= 1;
}
}
}
}
int main(){
int n;
cin >> n;
 Vector Alpha(n);
 Alpha.push(n);
 Alpha.push(n+1);
 Alpha.push(n+2);
 Alpha.push(n+3);
 Alpha[4] = n + 5;
 cout << Alpha.size_for_now() << endl;
 cout << Alpha.find_an_element(n+1) << endl;
 cout << Alpha.find_an_element(10) << endl;
 cout << Alpha[3] << endl;
 return 0;
 }

