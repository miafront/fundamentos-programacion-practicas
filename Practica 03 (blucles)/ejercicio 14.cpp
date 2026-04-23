#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = 1, b = 1, c;
    if(n == 0){
        cout << 1;
    } else if(n == 1){
        cout << 1;
    } else {
        for(int i = 2; i <= n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        cout << b;
    }
    return 0;
}