#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile("test.txt", ios_base::out);
    outfile << "文字列をファイルに書き込みます。" << endl;
    outfile << "ファイルに書き込むのは簡単です。" << endl;
    outfile.close();
}