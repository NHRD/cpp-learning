#include <iostream>
using namespace std;

int factorial(int n){
    static int result = 1;
    for(int i = n; i >= 2; --i){
        result = result * i;
    }
    return result;
}

int main(){
    cout << factorial(5) << endl; // 120
}