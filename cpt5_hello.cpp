#include <iostream>
using namespace std;

void sayHello(int times){
    for (int i = 0; i < times; i++){
        cout << "Hello, World!" << endl;
    }
}

int main(){
    sayHello(10);
}