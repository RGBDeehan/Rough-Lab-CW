
#include <stdio.h>

int main() {

    freopen("age.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);

    int m, n, x[100], i;


    scanf("%d", &n);


    m = -1;


    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        if (x[i] > m) {
            m = x[i];
        }
    }


    fprintf("ans.txt"stdout, "Maximum age is: %d\n", m);

    return 0;
}
