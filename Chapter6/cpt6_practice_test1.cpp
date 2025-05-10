#include <iostream>
#include <vector>
using namespace std;

int total(vector<vector<int>> m) {
    int sum = 0;
    for (int i = 0; i < m.size(); ++i){
        for (int j = 0; j < m[i].size(); ++j){
            sum = sum + m[i][j];
        }
    }
    return sum;
}

int main()  {
    vector<vector<int>>  m{{1, 2, 3}, {4, 5, 6}};
    cout << total(m) << endl; 
}