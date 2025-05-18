#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n = 123;
    cout << '[' << setw(5) << n << ']' << endl;
    cout << '[' << n << ']' << endl;
}