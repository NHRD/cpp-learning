#include <iostream>
using namespace std;

int add1(int x){
    return x + 1;
}

int main(){
    int result = add1(5);
    cout << "The result is: " << result << endl;
}