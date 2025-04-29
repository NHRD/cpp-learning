#include <iostream>
using namespace std;

int factorial(int n){
    int result = 1;
    for(int i = n; i >= 2; --i){
        result = result * i;
    }
    return result;
}

int main(){
    for(int i = 1; i <= 15; ++i){
        cout << "f(" << i << ") = " << factorial(i) << endl;
    }
}