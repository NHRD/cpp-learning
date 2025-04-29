#include <iostream>
using namespace std;

int factorial(int n){
    if (n < 2) return 1;
    return n * factorial(n - 1);
}

int main(){
    for(int i = 1; i <= 15; ++i){
        cout << "f(" << i << ") = " << factorial(i) << endl;
    }
}