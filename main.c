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
void PrintLivro();

main(){


    char ch;
    primeiro = (Livro*) NULL;

    do{

GetLivro();
puts("\n Inserir outrolivro (s/n): ");
ch = getch();

    }while((ch != 'n') && (ch != 'N'));

    puts("\n Lista dos livros cadastrados");
    puts("===============================");

PrintLivro();

return 0;


}



void GetLivro(){

    char temp[80];
    NovoLivro = (Livro*) malloc(sizeof(Livro));

    if(primeiro == (Livro*)NULL){primeiro = atual = NovoLivro;}
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

void PrintLivro(){

if (primeiro == (Livro*) NULL){
    puts("Lista vazia");
    return;
}

atual = primeiro;
do{


    printf("Titulo: %s\n",atual->Titulo);
    printf("Autor: %s\n",atual->Autor);
    printf("No. Reg:  %d\n",atual->NumReg);
    printf("Preco:  %.2f\n\n",atual->Preco);

atual = atual->Proximo;

}while(atual->Proximo == (Livro*)NULL);
}


