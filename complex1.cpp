#include <iostream>
#include <complex>
using namespace std;
using cplx = complex<double>;

int main(){
    cplx b(3., 4.);
    cout << b << endl; // Output: 3.0 + 4.0i
    cout << b.real() << endl; // Output: 3.0
    cout << b.imag() << endl; //
}