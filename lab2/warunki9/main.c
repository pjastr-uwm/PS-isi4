#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int min = (a<b) ? (a<c ? a : c) : (b<c ? b : c);
    printf("%d\n", min);
    return 0;
}
