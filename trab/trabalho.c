#include <stdio.h>
#include <stdlib.h>
#include "Interface.h"

typedef struct
{
    
}Artista;

typedef struct
{
    
}Musica;

int main() {
    int escolha = 0;
        InterfaceSpotfly();
        retorna:
    do
    {
        OpcoesSpotfly();

        printf("Escolha:");
        scanf("%d", &escolha);
    } while (escolha);
    if(escolha == 0) {
        printf("Tem certeza que deseja sair?\n");
        printf("1 - Sim\n2 - Nao\n");
        
        printf("Escolha:");
        scanf("%d", &escolha);
        if(escolha == 2) {
            goto retorna;
        }
        else if(escolha == 1) {
            return 0;
        }
    }


    return 0;
}
