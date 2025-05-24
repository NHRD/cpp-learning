#include <iostream>
#include <regex>
using namespace std;

int main() {
    string str = "abc, 123, xyz";
    regex rx(R"(,|\s+)");
    sregex_token_iterator HRD(str.begin(), str.end(), rx, -1);
    sregex_token_iterator end;
    while (HRD != end) {
        cout << *HRD++ << endl;
    }
}