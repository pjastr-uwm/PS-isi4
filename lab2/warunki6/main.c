#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
//    if ( (x+y) %2 ==0){
//        printf("suma parzysta\n");
//    }
//    else{
//        printf("suma nieparzysta\n");
//    }
    if ((x+y) % 2 != 0){
        printf("suma nieparzytsa\n");
    }
    else{
        printf("suma parzytsa\n");
    }
    return 0;
}
