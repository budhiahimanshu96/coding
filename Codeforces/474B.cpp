#include<stdlib.h>
#include<stdio.h>
int a[100000];

int go(int b, int l, int r)
{
    int ans;

    if (l == r - 1){
        if (b <= a[l])ans = l; else ans = r;
    }
    else
        if (a[(l + r) / 2] == b)ans = (l + r) / 2;
        else if (a[(l + r) / 2] < b) ans = go(b, (l + r) / 2, r);
        else if (a[(l + r) / 2] > b) ans = go(b, l, (l + r) / 2);

        return ans;
}
int main()
{
    int n, m, s = 1, b;
    scanf("%d", &n);
    scanf("%d", &b);
    a[0] = b;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &b);
        a[i] = a[i - 1] + b;
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b);

        printf("%d\n", go(b, 0, n - 1) + 1);
    }

}
