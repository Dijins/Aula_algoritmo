#include <stdio.h>
#include <stdlib.h>

void primo(int num);

int main()
{
    int n=0;

    do{
    printf("Digite um numero, ou o 0 para sair:");
    scanf("%d", &n);

    primo(n);

    }while(n!=0);

    return 0;
}

void primo(int num){

    int div=0;

    for(int i=2; i<num; i++){

        if(num!=2 && num%i==0){
            div++;
        }
    }
    if(div==0 && num>0){
        printf("%d eh primo.\n", num);
    }else{
        printf("%d nao eh primo.\n", num);
    }
}
