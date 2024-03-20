#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define ERRO 0

struct Pessoa {
    char nome [1024];
    int idade;
    float altura;
    float peso;
};

struct Pessoa criarPessoa(){
void imprimirPessoa(struct Pessoa x);
float calculaIMC (struct Pessoa x);
}

void main(){
    system("cls");
    struct Pessoa Fulano = criarPessoa();
    imprimirPessoa(Fulano);
    printf("%.3f", calculaIMC(Fulano));
}

struct Pessoa criarPessoa(){
    struct Pessoa x;
    printf("Nome: ");
    gets(X.nome);
    printf("Idade: ");
    gets(X.idade);
    printf("Altura: ");
    gets(X.altura);
    printf("Peso: ");
    gets(X.peso);

}

float calculaIMC (struct Pessoa x){
    float IMC = x.peso / (x.altura * x.altura);
    return (IMC);
} 