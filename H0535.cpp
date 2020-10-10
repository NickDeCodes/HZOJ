/*************************************************************************
	> File Name: H0535.cpp
	> Author: 
	> Mail: 
	> Created Time: 六 10/10 20:41:57 2020
 ************************************************************************/

#include <iostream>
using namespace std;

int w, h, fx, fy, sum = 1;
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
char data[55][55];

void func(int fx, int fy) {
    for (int i = 0; i < 4; i++) {
        int x = fx + dir[i][0];
        int y = fy + dir[i][1];
        if (data[x][y] == '.') {
            data[x][y] = 0;
            sum++;
            func(x, y);
        }
    }
}

int main() {
    cin >> w >> h;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> data[i][j];
            if (data[i][j] == '@') {
                fx = i;
                fy = j;
            }
        }
    }
    func(fx, fy);
    cout << sum << endl;
    return 0;
}
