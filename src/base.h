#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Linha *Quadro;
typedef struct Linha
{
    int Idlinha;
    int coluna[80];

}Linha;

void gera_quadro(Quadro quadro);