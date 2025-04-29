#include <iostream>
using namespace std;

int main(){
    for (int i =1; i <= 100; ++i){
        if (i % 15 == 0) {
            cout << "FizzBuzz" << endl;
            continue;
        }
        if (i % 3 == 0) cout << "Fizz" << endl;
        else if (i % 5 == 0) cout << "Buzz" << endl;
        else cout << i << endl;
        }
}
// This code is a more efficient version of the FizzBuzz problem.
// It checks for the condition of being divisible by 15 first,
// which is the condition for both Fizz and Buzz.
// This way, it avoids unnecessary checks and prints the correct output.
// The use of 'continue' allows the loop to skip to the next iteration
// after printing "FizzBuzz", ensuring that the other conditions are not checked.