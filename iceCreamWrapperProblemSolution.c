// Solution

#include <stdio.h>
int main()
{
    int n, ice, rem, wrap ,actN;
    scanf("%d", &n);
    actN=n;
    ice = n / 3;
    rem = n % 3;
    n += ice;
    do
    {
        wrap = ice + rem;
        n += wrap / 3;
        rem = wrap % 3;
        ice = wrap / 3;
    } while (wrap> 2);
    printf("%d",2*actN-n);
    return 0;
}