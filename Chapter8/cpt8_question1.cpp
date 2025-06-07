#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile("numbers.dat", ios_base::out);
    for (int i = 1; i <= 1000; ++i){
        cout << i << endl;
        outfile << i << endl;
    }
    outfile.close();
}