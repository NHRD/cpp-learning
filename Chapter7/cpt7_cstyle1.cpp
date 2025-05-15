#include <iostream>
using namespace std;

void report(const char* cstr){
    for (int i = 0; cstr[i] != '\0'; ++i) {
        cout << '[' << i << ']' << cstr[i] << endl;
    }
}

int main(){
   char cstr[] = "Hello";
   cstr[0] =  'H';
   cout << cstr << endl;
   size_t size = end(cstr) - begin(cstr);
   cout << size << endl;
   cstr[0] = 'G';
   cout << cstr << endl;
   report(cstr);

}