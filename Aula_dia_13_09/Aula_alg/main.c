#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int quadrado;

    for(int num=1;num<=100;num++){
        quadrado=num*num;
        printf("%d e seu quadrado eh %d\n", num, quadrado);
    }

    return 0;
}
