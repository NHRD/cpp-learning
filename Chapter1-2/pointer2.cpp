#include <iostream>
using namespace std;
using unit = unsigned int;

int main(){
   int a = 10;
   int* pA = &a;
   int** ppA = &pA;
   cout << **ppA << endl; // Output: 10
   unit x = 10;
   cout << x << endl;
   }


