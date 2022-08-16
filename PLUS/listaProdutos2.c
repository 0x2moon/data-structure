#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int id;
    char *nome;
    struct Produtos *prox;
}Produtos;


 typedef struct {
    int index, capacidade;
    Produtos *produtos;
}Lpro;


void *create(Lpro *Listedeproduto){
    
    Listedeproduto = (Lpro *) malloc (sizeof(Lpro));
    Listedeproduto->index = 0;
    Listedeproduto->capacidade = 1;
    Listedeproduto->produtos = (Produtos *) malloc(sizeof(Produtos));

}

void destroy(Lpro *Listedeproduto){

    free(Listedeproduto->produtos);
    free(Listedeproduto);
}

bool _isfull(Lpro *Listedeproduto){

    if (Listedeproduto->capacidade == Listedeproduto->index)
    {
        return true;
    }
        return false;

}

void insertname(Lpro *Listedeproduto, char *nome){ 
  int i = 0;
   nome:
      if (nome[i] != '\0')
      {
         i++;
      }
    goto nome;    
   Listedeproduto->produtos->nome = (char *) malloc (i * sizeof(char));
   Listedeproduto->produtos->nome = nome;

}

void insertproduto(Lpro *Listedeproduto, char *nome){
     
     if (_isfull(Listedeproduto) == true)
     {
         
     }
     insertname(Listedeproduto, nome);
     Listedeproduto->index++;
     
 
        
}

int main(){

Lpro *listaProdutos;

create (listaProdutos);
destroy(listaProdutos);
    fprintf(stdout,"digite um nome: ");
return 0;
}
main.c