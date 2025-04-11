#include <iostream>
using namespace std;

int main(){
    int n = 9;
    if (n % 2 == 1) {
        cout << "n is odd\n";
        if (n % 3 == 0) {
            cout << "n is odd and divisible by 3\n";
        }
    }
}
