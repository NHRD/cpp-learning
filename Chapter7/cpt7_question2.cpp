#include <iostream>
using namespace std;

#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
    double x = 0.1;

    // 正しい方法: hexfloatを使用
    stringstream ss2;
    ss2 << hexfloat << x;
    string hexStr = ss2.str();
    
    cout << "xの16進数表現: " << hexStr << endl;
    
    // 16進数文字列をdoubleに変換
    double y = stod(hexStr);
    
    cout << "x == y: " << (x == y) << endl;
    cout << "x: " << fixed << setprecision(17) << x << endl;
    cout << "y: " << fixed << setprecision(17) << y << endl;
    
    return 0;
}