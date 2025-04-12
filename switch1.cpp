#include <iostream>
using namespace std;

int main(){
    int n = 5;
    switch (n % 3){
        case 0:
            cout << "n is divisible by 3" << endl;
            break;
        case 1:
            cout << "n leaves a remainder of 1 when divided by 3" << endl;
            break;
        case 2:
            cout << "n leaves a remainder of 2 when divided by 3" << endl;
            break;
        default:
            cout << "This should never happen!" << endl;
            break;
    }
}