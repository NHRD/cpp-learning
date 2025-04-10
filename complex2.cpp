#include <iostream>
#include <complex>
using namespace std;
using cplx = complex<double>;

int main(){
    cplx* p = new cplx;
    cout << *p << endl; // Output: 0.0 + 0.0
    cplx* q = new cplx(4., 5.);
    cout << *q << endl; // Output: 4.0 + 5.0
    cplx* r = new cplx(*q);
    cout << *r << endl; // Output: 4.0 + 5.0
    cout << q-> real() << endl; // Output: 4.0
    cout << q-> imag() << endl; // Output: 5.0
}
