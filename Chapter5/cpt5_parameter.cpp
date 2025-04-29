#include <iostream>
using namespace std;

void f1(int x) {cout << ++x << endl;}

void f2(const int x) {cout << x + 1 << endl;}

void f3(int& x) {cout << ++x << endl;}

void f4(const int& x) {cout << x + 1 << endl;}

void f5(int&& x) {cout << ++x << endl;}

void f6(const int&& x) {cout << x + 1 << endl;}

void f7(int* p) {cout << ++(*p) << endl;}

void f8(const int* p) {cout << (*p) +  1 << endl;}

int main() {
    int a = 10;  // 変数の値を渡す用
    int b = 20;  // 参照用の変数
    int c = 30;  // ポインタ用の変数
    
    cout << "f1(int x): ";
    f1(a);  // 値渡し
    cout << a << endl;
    
    cout << "f2(const int x): ";
    f2(a);  // 定数値渡し
    cout << a << endl;
    
    cout << "f3(int& x): ";
    f3(b);  // 参照渡し
    cout << b << endl;
    
    cout << "f4(const int& x): ";
    f4(b);  // 定数参照渡し
    cout << b << endl;
    
    cout << "f5(int&& x): ";
    f5(100);  // 右辺値参照（リテラル値を渡す）
    
    cout << "f6(const int&& x): ";
    f6(200);  // 定数右辺値参照
    
    cout << "f7(int* p): ";
    f7(&c);  // ポインタ渡し
    cout << c << endl;
    
    cout << "f8(const int* p): ";
    f8(&c);  // 定数ポインタ渡し
    cout << c << endl;
    
    return 0;
}