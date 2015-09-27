#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 10000;

int main() {
    int n, q, a[maxn], b[maxn], p, counter = 0;
    while (true){
        counter++;
        scanf("%d%d", &n, &q);
        if (n == 0 && q == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", a + i);
        }
        for (int i = 0; i < q; i++) {
            scanf("%d", b + i);
        }
        sort(a, a + n);
        printf("CASE# %d:\n", counter);
        for (int i = 0; i < q; i++) {
            p = lower_bound(a, a + n, b[i]) - a;
            if (a[p] == b[i]) {
                printf("%d found at %d\n", b[i], p + 1);
            }
            else {
                printf("%d not found\n", b[i]);
            }
        }
    }
}

