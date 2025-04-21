#include <iostream>
using namespace std;

int fibonacci(int n) {
    int a;
    int b = 1;
    int f = 1;
    for (int i = 3; i <= n; ++i){
        a = b;
        b = f;
        f = a + b;
    }
    return f;
}

int main(){
    for(int i = 1; i <= 10; ++i){
    cout << fibonacci(i) << endl;
    }
}