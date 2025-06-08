#include <iostream>
#include <fstream>
using namespace std;

int main()  {
    ifstream datafile("numbers.dat");
    int x,  y;
    int sum = 0;
    while (datafile >> y >> x){
        sum += y;
    }
    datafile.close();
    cout << sum << endl;
    
}