#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


typedef struct Livro
{

    char Titulo[30];
    char Autor[30];
    int NumReg;
    double Preco;
    struct Livro *Proximo;
}Livro;

Livro *primeiro, *atual, *NovoLivro;

void GetLivro();

main(){

GetLivro();

}



void GetLivro(){

    char temp[80];
    NovoLivro = (Livro*) malloc(sizeof(Livro));

    if(primeiro == (Livro*)NULL){primeiro = atual=NovoLivro;}
        else{
            atual = primeiro;
            while(atual->Proximo != (Livro*) NULL){
                atual = atual->Proximo;
            }
            atual->Proximo = NovoLivro;
            atual = NovoLivro;
        }

        printf("\n Digite titulo: ");
        gets(atual->Titulo);

        printf("\n Digite Autor: ");
        gets(atual->Autor);

        printf("\n Digite numero do registro: ");
        gets(temp);
        atual->NumReg = atoi(temp);
        printf("\n Digite o preco: ");
        gets(temp);
        atual->Preco = atof(temp);
        atual->Proximo = (Livro*) NULL;



}


