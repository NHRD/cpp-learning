#include <iostream>
using namespace std;

int main(){
    int n = 5;
    if (n % 2 == 1) cout << "n is odd" << endl;
    else cout << "n is even" << endl;
    if (n % 2 == 1) {
        cout << "n is odd" << endl;
        cout << "n is not even" << endl;
    }
}