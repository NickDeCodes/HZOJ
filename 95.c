/*************************************************************************
	> File Name: 95.c
	> Author: zhengdongqi
	> Mail: 1821260963@qq.com
	> Created Time: 四  5/23 23:25:06 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    int a;
    scanf("%d", &a);
    while (a) {
        printf("%d", a % 10);
        a /= 10;
    }
    printf("\n");
    return 0;
}
