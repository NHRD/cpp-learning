#include <iostream>
#include <vector>
using namespace std;

auto myReverse(int* m, int* pos){
    int size =  pos - m;
    static int* reversed = new int[size];
    for (int i = 0; i < size; i++){
        reversed[i] = m[size - 1 - i];
       }
    return reversed;
}

int main(){
    int a[] = {2, 9, 4, 1, 5, 3};
    myReverse(a, end(a));
    for (auto i : a) cout << i << ", ";
    cout << endl;

    int b[] = { 3 };
    myReverse(b, end(b));
    for (auto i : b) cout << i << ", ";
    cout << endl;
}