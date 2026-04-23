#include <iostream>
using namespace std;
int main (){
int N, suma = 0;
cout <<"Ingrese el numero N: " ;
cin >> N;
for (int i = 1; i<= N; i++){
 if (i%2 == 0) {
    suma-=i;
 }   else {
 suma+=i;
 }}
 cout <<"El resultado de la suma es: " << suma;
return 0;
}
