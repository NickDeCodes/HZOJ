/*************************************************************************
	> File Name: 107.c
	> Author: zhengdongqi
	> Mail: 1821260963@qq.com
	> Created Time: 四  5/23 23:29:03 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 7 == 0 && n % 2 != 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

