#ifndef MUSICA_H
#define MUSICA_H
#include "atributos.h"

typedef struct
{
    // relacionado aos artistas dela
    char **artistas_da_musica;
    int id_artista;
    //propriedades da musica
    Atributos atributos;
    // sobre a musica
    char *id_musica;
    char *nome_musica;
    int popularity;
    int duracao_musica;
    short int explicito;
}Musica;

#endif