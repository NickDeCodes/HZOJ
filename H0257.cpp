/*************************************************************************
	> File Name: H0257.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  6/18 20:37:13 2019
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;
#define MAX_N 1000

struct Node {
    int father, head, tail;
    int val, cnt;
};

priority_queue<Node> q;
bool operator<(const Node &a, const Node &b) {
    return a.val * b.cnt < b.val * a.cnt;
}

struct Unionset {
    int fa[MAX_N + 5];
    Node arr[MAX_N + 5];
    int next[MAX_N + 5];
    inline void init(int n) {
        for (int i = 1; i <= n; i++) {
            fa[i] = i, next[i] = 0;
            arr[i].head = arr[i].tail = i;
            arr[i].cnt = 1;
            arr[i].father = 0;
        }
        return ;
    }
    int get(int x) {
        return fa[x] = (fa[x] == x ? x : get(fa[x]));
    }
    void merge(int a, int b) {
        int aa = get(a), bb = get(b);
        if (aa == bb) return ;
        fa[bb] = aa;
        next[arr[aa].tail] = arr[bb].head;
        arr[aa].tail = arr[bb].tail;
        arr[aa].val = arr[bb].val; 
        arr[aa].cnt = arr[bb].cnt;
        return ;
    }
};

Unionset u;
int val[MAX_N + 5];

int main() {
    int n, r;
    cin >> n >> r;
    u.init(n);
    for (int i = 1; i <= n; i++) {
        cin >> u.arr[i].val;
        val[i] = u.arr[i].val;
    }
    for (int i = 1; i< n; i++) {
        int a, b;
        cin >> a >> b;
        u.arr[b].father = a;
    }
    for (int i = 1; i <= n; i++) {
        q.push(u.arr[i]);
    }
    while (!q.empty()) {
        int fp = q.top().father, p = q.top().head;
        q.pop();
        if (fp) {
            u.merge(fp, p);
            q.push(u.arr[u.get(p)]);
        }
    }
    int p = r, t = 1, ans = 0;
    while (p) {
        ans += val[p] * (t++);
        p = u.next[p];
    }
    cout << ans << endl;
    return 0;
}
