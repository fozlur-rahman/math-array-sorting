#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int w, h;

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &w, &h);
        if (w == h)
        {
            printf("Square");
        }
        else
        {
            printf("Rectangle");
        }
        printf("\n");
    }

    return 0;
}