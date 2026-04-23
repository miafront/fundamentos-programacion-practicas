#include <iostream>
using namespace std;
int main(){
    int a, b, x, y;
    cin >> a >> b;
    x = a;
    y = b;
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    int mcd = a;
    int mcm = (x * y) / mcd;
    cout << "MCM: " << mcm;
    return 0;
}