/*************************************************************************
	> File Name: 103.c
	> Author: zhengdongqi
	> Mail: 1821260963@qq.com
	> Created Time: 四  5/23 23:27:42 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % b == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
