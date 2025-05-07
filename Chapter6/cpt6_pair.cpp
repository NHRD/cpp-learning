#include <iostream>
#include <utility>

using namespace std;

int main(){
   auto taro = make_pair("Taro", 32);
   
   cout << taro.first << endl;
   cout << taro.second << endl;
}