#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Escreva um numero inteiro positivo:");
    scanf("%d", &num);

    for(int cont=0; cont<=num; cont+=3){
        printf("%d\n", cont);
    }

    return 0;
}
