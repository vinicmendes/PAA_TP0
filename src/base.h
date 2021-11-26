#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Quadro *apQuadro;
//lista de colunas armazenando números correspondentes a cada caractere: 0 == " ", 1 == "*", 2 == "-", 3 == "|",
//4 == " "(espaços da figura que não podem ser violados); 
typedef struct Quadro
{
    int Idlinha;
    int matriz[20][80];

}Quadro;

void gera_quadro_vazio(apQuadro*  quadro);
void preenche_quadro (apQuadro* quadro);
void imprime_quadro (apQuadro quadro);
void libera_quadro (apQuadro* quadro);
