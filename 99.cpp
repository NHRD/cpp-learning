#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int n = 9;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
        cout << setw(3) << i * j;
        }
        cout << endl;
    }
}