#include <iostream>
using namespace std;

int main(){
   char cstr[] = "Hello";
   cstr[0] =  'H';
   cout << cstr << endl;
   size_t size = end(cstr) - begin(cstr);
   cout << size << endl;
   cstr[0] = 'G';
   cout << cstr << endl;

}