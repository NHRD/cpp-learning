#include <iostream>
#include <vector>
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

int main() {
    int num = 25;
    int result = numOfDivisors(num);
    cout << "Number of divisors of " << num << " is: " << result << endl;
}