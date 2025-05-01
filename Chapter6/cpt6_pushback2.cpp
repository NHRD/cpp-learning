#include <iostream>
#include <vector>
#include <complex>
using namespace std;
using cplx = complex<double>;

int main() {
    vector<cplx> v;
    v.emplace_back(1., 2.);
    cout << v[0] << ", " << endl;
}