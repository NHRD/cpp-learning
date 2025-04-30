#include <iostream>
#include <vector>
#include <complex>
using namespace std;
using cplx = complex<double>;

int main(){
    vector<cplx> v;

    cplx z(3., 4.);
    v.push_back(z);
    for(int i; i < v.size(); ++i){
    cout << v[i] << ", ";
    }
    cout << endl;
}