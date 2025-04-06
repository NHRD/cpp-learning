#include <iostream>
using namespace std;

int main(){
    cout << (10 / 4) << endl;
    cout << (1 / 3) << endl;
    cout << (10 % 4) << endl;
    cout << (1 + 2 * 3) << endl;
    cout << ((1 + 2) * 3) << endl;
    cout << (1 / 3.0) << endl;
    cout << (1 < 2 && 2 < 3) << endl;
    cout << (1 < 2 && 3 < 2) << endl;
    cout << (2 < 1 || 1 < 2) << endl;
    cout << (!(2 < 1)) << endl;
    cout << (1 < 2 && 0) << endl;
    cout << (0 || 1 < 2) << endl;
    
    int a = 5, b = 3;
    cout << (a & b) << endl; // Bitwise AND
    cout << (a | b) << endl; // Bitwise OR
    cout << (a ^ b) << endl; // Bitwise XOR
    cout << (~a) << endl; // Bitwise NOT
}