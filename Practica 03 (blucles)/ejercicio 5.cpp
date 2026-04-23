#include <iostream>
using namespace std;
int main(){
int N, mult=1;
cout <<"Ingrese el numero N: ";
cin >> N;
for (int i = 1; i<=N ; i++){
mult *= i;
}
cout <<"El resultado de la multiplicacion es: " << mult;
return 0;
}
