#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Input the sentence and press enter key, quit by ctrl + z" << endl;
    string str;
    while(cin >> str) {
        cout << "The sentence recived is " << str << endl;
    }
    cout << "task finished" << endl;
}