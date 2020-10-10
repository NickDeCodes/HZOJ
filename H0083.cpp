/*************************************************************************
	> File Name: H0083.cpp
	> Author: 
	> Mail: 
	> Created Time: 六 10/10 20:05:03 2020
 ************************************************************************/

#include <iostream>
using namespace std;

int func(int s, int num, int cnt) {
    if (cnt == 0) {
        if (num == 0) return 1;
        return 0;
    }
    int n = 0;
    for (int i = s; i <= num; i++) {
        n += func(i, num - i, cnt - 1);
    }
    return n;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << func(1, n, m) << endl;
    return 0;
}
