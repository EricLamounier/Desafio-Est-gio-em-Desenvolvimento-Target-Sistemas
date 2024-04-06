#include <stdio.h>

int fibonacci(int valor){
  int anterior = 0, atual = 1;
  int aux;

  while(atual < valor){
    aux = atual;
    atual += anterior;
    anterior = aux;
  }

  return atual;
}

int main(){
    int fib = 10;
    printf("%d esta contido na sequencia de fibonacci? %s\n",fib, fibonacci(fib) == fib ? "Sim" : "Nao");
}