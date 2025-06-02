#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream infile("test.txt");
    string line;
    while (getline(infile, line)){
        cout << line << endl;
    }
    infile.close();
}