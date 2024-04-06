#include <stdio.h>

int soma() {
    int indice = 13, soma = 0, k = 0;
    while(k < indice){
        k++;
        soma+=k;
    }
    return soma;
}

int main(){
    printf("Soma: %d\n", soma());
    return 0;
}