#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

using person = pair<string, int>;

int main(){
    unordered_map<string, person> people;
    people["John"] = {"John Doe", 30};
    auto taro = make_pair("Taro", 32);
    people["Taro"] = {"Taro", 100};

    cout << people["Taro"].second << endl;
}