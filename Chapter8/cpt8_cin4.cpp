#include <iostream>
using namespace std;

int main() {
    cout << "Input integers:" << endl;
    int total = 0;
    int n;
    while(cin >> n) {
        total += n;
    }
    cout << "The total is " << total << endl;
}