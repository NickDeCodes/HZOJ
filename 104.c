/*************************************************************************
	> File Name: 104.c
	> Author: zhengdongqi
	> Mail: 1821260963@qq.com
	> Created Time: 四  5/23 23:28:00 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    int a;
    scanf("%d", &a);
    while (a) {
        if (a % 10 == 9) {
            printf("YES\n");
            return 0;
        }
        a /= 10;
    }
    printf("NO\n");
    return 0;
}
