#include <stdio.h>
int main()
{
    int x, p;
    scanf("%d %d", &x, &p);
    float xpp = 100 - x;
    float ans = ((p / xpp) * x) + p;
    printf("%.2f", ans);

    return 0;
}