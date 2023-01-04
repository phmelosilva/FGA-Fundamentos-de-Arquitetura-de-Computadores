#include <stdio.h>

int main() {
    int n, num;
    int comp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (i == 0) comp = num;
        if (num > comp) comp = num;
    }
    printf("%d\n", comp);
    return 0;
}