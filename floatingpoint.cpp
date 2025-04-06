#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double x = 0.1;
    double y = x + x + x + x + x + x + x + x + x + x;
    cout << (x == 1.) << endl;
    cout << setprecision(20);
    cout << y << endl;
    cout << x << endl;
}

