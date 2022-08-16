#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

 struct Produtos {
    int id;
    char *nome;
    struct Produtos *prox;
};


struct Lprodutos {
    int index, capacidade;
    struct Produtos *produtos;
};


struct Lprodutos *create(){
    struct Lprodutos * Listedeproduto = (struct Lprodutos *) malloc (sizeof(struct Lprodutos));
    Listedeproduto -> produtos = (struct Produtos *) malloc(sizeof(struct Produtos));
    return Listedeproduto;
}

void (Lprodutos *Listadeprodutos){
   
    Listedeproduto->index = 0;
    Listedeproduto->capacidade = 1;
   

}