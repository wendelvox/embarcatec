#include <stdio.h>

int main(){

char nome [50];
int idade;

printf("Informe o seu nome: ");
scanf("%41s", nome);

printf("Informe a sua idade: ");
scanf("%d", &idade);

 printf("Olá, %s. Você tem %d anos.\n", nome, idade);

}