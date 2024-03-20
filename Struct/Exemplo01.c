#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define ERRO 0

struct Pessoa {
    char nome [20];
    int idade;
    float altura;
};

int main (){
    //exemplo de struct Pessoa
    struct Pessoa X;
    strcpy (X.nome, "Joao");
    X.idade = 25;
    X.altura = 1.75;

    // Acessando os campos da struct
    printf("Nome: %s\n", X.nome); // Saída: Nome: João
    printf("Idade: %d\n", X.idade); // Saída: Idade: 25
    printf("Altura: %.2f\n", X.altura); // Saída: Altura: 1.75
    return 0;
}

