#include <iostream>
#include <regex>
using namespace std;

int main(){
    string str = "My postal code is 194-0013, her postal code is 153-0042.";
    regex rx(R"(\d{3} - \d{4})");
    string tmp = "XXX-XXXX";
    cout << regex_replace(str, rx, tmp) << endl;
}