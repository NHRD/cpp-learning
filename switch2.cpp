#include <iostream>
using namespace std;

int main(){
    int n = 5;
    switch(n % 3){
        case 0:
            cout << "nは3の倍数です。";
            break;
        case 1:
            /*FALLTHROUGH*/
        case 2:
            cout << "nは3の倍数ではありません。";
            break;
    }
}