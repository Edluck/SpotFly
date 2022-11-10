#include <stdio.h>
#include <stdlib.h>
#include "Interface.h"
#include "artista.h"
#include "musica.h"
#include <string.h>

int main(int argc, char* argv[]) {
    int escolha = 0;
       // InterfaceSpotfly();
        retorna:
    do
    {
       // OpcoesSpotfly();
        printf("Escolha:");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            Busca_musicas();
            break;
        case 2:
            Lista_as_musicas();
            break;
        case 4:
            Criar_uma_playlist();
            break;
        case 5:
            Listar_todas_playlist();
            break;
        case 6:
            Listar_uma_playlist();
            break;
        case 7:
            Adicionar_uma_musica_playlist();
            break;
        case 8:
            Recomenda_musica_duma_playlist();
            break;
        case 9:
            Gera_relatorio();
            break;   
        default:
            break;
        }

    } while (escolha);
  /*  if(!escolha) {
        printf("Tem certeza que deseja sair?\n");
        printf("1 - Sim\n2 - Nao\n");
        
        printf("Escolha:");
        scanf("%d", &escolha);
        if(escolha == 2) {
            goto retorna;
        }
        else if(escolha == 1) {
            system("clear");
            printf("Bye!\n");
            Delay();
            return 0;
        }
    }
    */


    return 0;
}
