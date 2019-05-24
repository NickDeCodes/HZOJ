/*************************************************************************
	> File Name: 111.c
	> Author: zhengdongqi
	> Mail: 1821260963@qq.com
	> Created Time: 四  5/23 23:30:12 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    double n;
    scanf("%lf", &n);
    if (n > 3) {
        printf("%g\n", 14 + (n - 3) * 2.3);
    } else {
        printf("%d\n", 14);
    }
    return 0;
}
