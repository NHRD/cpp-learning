#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v0 = {0, 1, 2, 3, 1, 2, 4, 5, 6, 7, 8, 9, 10};

int main() {
vector<int> v1 = v0;
sort(v1.begin(), v1.end());
v1.erase(unique(v1.begin(), v1.end()), v1.end());
for (auto i : v1) cout << i << ", ";
cout << endl;
}