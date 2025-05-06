#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> dictionary{{"one", 0}, {"two", 2}, {"three", 3}};
    cout << dictionary["two"] << endl; // Output: 2
    dictionary["one"] = 1;
    cout << dictionary["one"] << endl; // Output: 1
    cout << dictionary["four"] << endl;
    if (dictionary.find("five") == dictionary.end()) {
        cout << "five not found" << endl; // Output: five not found
    }
    dictionary["six"] = 6;
    cout << dictionary["six"] << endl; // Output: 6
    for (const auto& p : dictionary) {
        cout << p.first << ": " << p.second << endl;
    }
}
