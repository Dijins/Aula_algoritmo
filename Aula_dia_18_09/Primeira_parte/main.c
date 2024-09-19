#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero inteiro positivo:");
    scanf("%d", &num);

    if(num >= 0){
    while(num >= 0){
        printf("%d\n", num);
        num--;
    }
    }else{
    printf("Digite um valor maior que zero!");
    }

    return 0;
}
