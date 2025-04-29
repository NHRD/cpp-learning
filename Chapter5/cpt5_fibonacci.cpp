#include <iostream>
using namespace std;

int fibonacci(int n){
    if ( n < 3) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    for (int i = 1; i <= 10; i++){
        cout << "Fibonacci(" << i << ") = " << fibonacci(i) << endl;
    }
}