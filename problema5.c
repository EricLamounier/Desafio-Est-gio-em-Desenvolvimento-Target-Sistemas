#include <stdio.h>
#include <string.h>

int tamanho_string(char *str){
    int tamanho = 0;
    while(str[tamanho] != '\0'){
        tamanho++;
    }
    return tamanho;
}

void troca(char *primeiro, char *segundo){
    char aux = *primeiro;
    *primeiro = *segundo;
    *segundo = aux;
}

char *inverte_string(char *str){
    int tamanho = strlen(str), i;

    for(i=0;i<tamanho/2;i++){
        troca(&str[i], &str[tamanho-1-i]);
    }
    return str;
}

int main(){
    char str[] = "palavra";
    printf("Em reverso: %s\n", str, inverte_string(str));
    return 0;
}