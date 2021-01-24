#include <stdio.h>

int main()
{
    int a[5];
    int number;
    scanf("%d ", &number);

    if (number > 0 && number <= 20)
    {
        while (number > 0)
        {
            scanf(" %d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
            //            a[0] = 1;
            //            a[1] = 2;
            //            a[2] = 3;
            //            a[3] = 4;
            int i;
            int flag = 0;

            float d, t;
            for (i = 3; i >= 2; i--)
            {
                t = a[i - 1] - a[i - 2];
                d = a[i] - a[i - 1];
                if (t != d)
                    break;
                else
                {
                    a[4] = a[3] + t;
                    flag = 1;
                }
            }
            for (i = 3; i >= 2; i--)
            {
                if (flag == 1)
                    break;
                t = a[i - 1] / a[i - 2];
                d = a[i] / a[i - 1];
                if (t != d)
                    break;
                else
                {
                    a[4] = a[3] * t;
                }
            }
            for (i = 0; i < 5; i++)
                printf("%d ", a[i]);
            printf("\n");
            number--;
        }
    }
    return 0;
}
