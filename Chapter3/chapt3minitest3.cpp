#include <iostream>
#include <complex>
using namespace std;
using cplx = complex<double>;

int main(){
    cplx a(5., 10);
    cout << abs(a) << endl; // Output: 5.0 + 10.0i
}