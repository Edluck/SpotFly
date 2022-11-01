#include "Interface.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // biblioteca para implementar o delay na interface

void InterfaceSpotfly() 
{
    system("clear");
    usleep(1000000);
    printf("\t\tWELCOME TO SPOTFLY - Half Translated\n\n");
    usleep(1000000);
    printf("\t\t\tBy: Edgard de Souza T.\n\n");
    usleep(2000000);
    system("clear");
    printf("Loading...\n");
    usleep(2000000);
    system("clear"); 
}

void OpcoesSpotfly() {
    
    system("clear");
     usleep(1000000);
    printf("\nSelecione uma das opcoes abaixo de seu desejo(1-8):\n\n");
    printf("1 - Procurar musicas\n");
    printf("2 - Listar musicas\n");
    printf("3 - Reproduzir uma musica\n");
    printf("4 - Criar uma playlist\n");
    printf("5 - Listar playlists existentes\n");
    printf("6 - Adicionar musica a uma playlist\n");
    printf("7 - Recomendados com base na sua playlist\n");
    printf("8 - Gerar um relatorio\n");
    printf("0 - Sair do SpotFly\n");

}