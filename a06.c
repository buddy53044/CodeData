#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (pow(b, 2) - 4 * a * c > 0)
    {
        int ans1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
        int ans2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
        printf("Two different roots x1=%d , x2=%d", ans1, ans2);
    }
    else if (pow(b, 2) - 4 * a * c == 0)
    {
        int ans = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
        printf("Two same roots x=%d", ans);
    }
    else if (pow(b, 2) - 4 * a * c < 0)
    {
        printf("No real root");
    }

    return 0;
}