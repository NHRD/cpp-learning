#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    auto t0 = high_resolution_clock::now();

    int s = 0;
    for (int i = 0; i < 10000; ++i) {
        for (int j = 0; j < 100000; ++j) {
            ++s;
        }
    }
    cout << s << endl;
    auto t1 = high_resolution_clock::now();
    cout << duration_cast<microseconds>(t1 - t0).count() / 1000. <<" s." << endl;
}