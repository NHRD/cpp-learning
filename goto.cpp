#include <iostream>
using namespace std;

int main(){
    int i = 0;
    start:
    if (i++ == 5) goto end;
    cout << "Hello World!" << endl;
    goto start;
    end:
    cout << "End of loop" << endl;
}