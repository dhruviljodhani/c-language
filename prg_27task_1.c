#include <stdio.h>
int prev1 = 1;
int prev2 = 0;
int dh(int n)
{
    if (n < 3) {
        return;
    }
    int i = prev1 + prev2;
    prev2 = prev1;
    prev1 = i;
    printf("%d ", i);
    return dh(n - 1);
}
int printFib(int n)
{
    if (n < 1) {
        printf("\n");
    }
    else if (n == 1) {
        printf("%d ", 0);
    }
    else if (n == 2) {
        printf("%d", 1);
    }
    else {
        printf("%d ",1);
        dh(n);
    }
    return;
}
int main()
{
    int n = 9;
    printFib(n);
    return 0;
}