#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=0;i<7;i+=2){
        printf("%d\n", i);
    }
    printf("---\n");
    printf("%d\n", i);
    int j=0;
    for(; j<5;j++){
        printf("%d\n",j);
    }
    return 0;
}
