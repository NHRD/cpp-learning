#include <iostream>
#include <fstream>
using namespace std;

int main()  {
    ifstream datafile("numbers.dat");
    int x;
    int sum = 0;
    while (datafile >> x){
        sum += x;
    }
    datafile.close();
    cout << sum << endl;
    
}