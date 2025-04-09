#include <iostream>
#include <complex>
using namespace std;
using cplx = complex<double>;

int main(){
    cplx* p = new cplx;
    cout << *p << endl; // Output: 0.0 + 0.0
}
