#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> dictionary{{"one", 0}, {"two", 2}, {"three", 3}};
    cout << dictionary["two"] << endl; // Output: 2
    dictionary["one"] = 1;
    cout << dictionary["one"] << endl; // Output: 1
    
}
