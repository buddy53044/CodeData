#include <stdio.h>
#include <string.h>
int main()
{
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