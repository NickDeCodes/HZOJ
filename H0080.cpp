/*************************************************************************
	> File Name: H0080.cpp
	> Author: 
	> Mail: 
	> Created Time: 六 10/10 20:17:29 2020
 ************************************************************************/

#include <iostream>
using namespace std;

int n, m, sx, sy;
char mmap[505][505];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

int func(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if (mmap[tx][ty] == 'g') {
            return 1;
        }
        if (mmap[tx][ty] == '.') {
            mmap[tx][ty] = '*';
            if (func(tx, ty) == 1) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 's') {
                sx = i;
                sy = j;
            }
        }
    }
    if (func(sx, sy) == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
