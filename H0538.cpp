/*************************************************************************
	> File Name: H0538.cpp
	> Author: 
	> Mail: 
	> Created Time: 一 10/12 09:28:08 2020
 ************************************************************************/

#include <iostream>
using namespace std;

int n, num[25][25], check[25], flag;

void func(int x) {
    if (flag == 1) {
        cout << '-';
    }
    flag = 1;
    cout << x;
    for (int i = 1; i <= n; i++) {
        if (num[x][i] == 1 && check[i] == 0) {
            check[i] = 1;
            func(i);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> num[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (check[i] == 0) {
            check[i] = 1;
            func(i);
        }
    }
    return 0;
}
