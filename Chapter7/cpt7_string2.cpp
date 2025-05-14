#include<iostream>
#include<string>
using namespace std;

int main() {
    string str1 = "Hello ";
    string str2 = "World!";

    cout << str1[4] << endl;

    str1 += str2;
    cout << str1 << endl;
    
}