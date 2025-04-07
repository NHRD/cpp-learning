#include <iostream>
using namespace std;

int main(){
    enum class choice1 {ROCK, SISSORS, PAPER};
    choice1 x = choice1::ROCK;
    cout << (x == choice1::ROCK ? "true" : "false") << endl; // Output: true
}