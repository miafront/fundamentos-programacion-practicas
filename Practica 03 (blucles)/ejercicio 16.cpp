#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int cont = 0;
    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            cont++;
        }
    }
    if(cont == 2)
        cout << "Es primo";
    else
        cout << "No es primo";
    return 0;
}