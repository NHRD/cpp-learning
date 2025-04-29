#include <iostream>
using namespace std;

int main(){
    int n = 5;
    if (n % 3 == 0) cout << "a" << endl;
    else if (n % 3 == 1) cout << "b" << endl;
    else if (n % 3 == 2) cout << "c" << endl;
    else cout << "d" << endl; // This line will never be executed
}