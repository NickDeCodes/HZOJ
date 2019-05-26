/*************************************************************************
	> File Name: 43.cpp
	> Author: zhengdongqi
	> Mail: 1821260963@qq.com
	> Created Time: 日  5/26 14:35:23 2019
 ************************************************************************/

#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define MAX_N 1000
int f[MAX_N + 5][MAX_N + 5];


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> f[i][j];
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            f[i][j] += max(f[i + 1][j], f[i + 1][j + 1]);
        }
    }
    cout << f[0][0] << endl;
    return 0;
}
