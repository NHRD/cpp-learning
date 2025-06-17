#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int numOfDivisors(int n) {
    int divisors = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0){
            ++ divisors;
        }
    }
    return divisors;
}

bool less1(int lhs, int rhs) {
    return numOfDivisors(lhs) < numOfDivisors(rhs);
}

int main() {
    const int N = 16;
    vector<int> v;
    for (int i = 1; i <= N; ++i) v.push_back(i);

    vector<int> v1 = v;
    sort(v1.begin(), v1.end(), less1);
    for (auto i : v1) cout << i << ", ";
    cout << endl;
}