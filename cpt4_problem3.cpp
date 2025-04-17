#include <iostream>
using namespace std;

int main(){
    cout << " | 0 1 2 3 4 5 6 7 8 9 A B C D E F" << endl;
    cout << "-|--------------------------------" << endl;
    char ch = 0x20;
    int i = 2, j = 0;
    while(i <= 7){
        if (j == 0){
            cout << i << "|";
        }
        cout << " " << ch++;
        j++;
        if (j == 16){
            cout << endl;
            j = 0;
            i++;
        }
    }
}