#include <stdio.h>

int main()
{
    int m, d;
    scanf("%d %d", &m, &d);
    int s = (m * 2 + d) % 3;
    if (s == 0)
        printf("¦w");
    else if (s == 1)
        printf("³á");
    else if (s == 2)
        printf("£~");
    return 0;
}