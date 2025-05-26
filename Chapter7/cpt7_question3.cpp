#include <iostream>
#include <regex>
using namespace std;

int main(){
    string str = "My postal code is 194-0013, her postal code is 153-0042.";
    regex rx1(R"(\d{3}-)");
    regex rx2(R"(\d{4})");
    sregex_iterator it1(str.begin(), str.end(), rx1);
    sregex_iterator it2(str.begin(), str.end(), rx2);
    sregex_iterator end;
    while (it1 != end && it2 != end) {
        cout << (it1++)->str().substr(0, 3) << endl;
        cout << (it2++)->str() << endl;
    }

}