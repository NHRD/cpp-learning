#include <iostream>
using namespace std;

int f() {
    static int x = 0;
    x++;
    return x;
}

int main(){
    for (int i =0; i<5; i++){
        cout <<f() << endl;
    }
}