#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    sqrt()
    int k = 7;
    char a[80];
    gets(a);

    for (int i = 0; i < strlen(a); i++)
    {
        a[i] -= k;
    }
    printf("%s", a);

    return 0;
}