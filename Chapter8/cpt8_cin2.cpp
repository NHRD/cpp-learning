#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "OK? (y/n) ";
    string str;
    cin >> str;
    if (str == "y") {
        cout << "You entered yes." << endl;
    } else if (str == "n") {
        cout << "You entered no." << endl;
    } else {
        cout << "Invalid input." << endl;
    }
}