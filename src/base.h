#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Linha *Quadro;
//lista de colunas armazenando números correspondentes a cada caractere: 0 == " ", 1 == "*", 2 == "-", 3 == "|",
//4 == " "(espaços da figura que não podem ser violados); 
typedef struct Linha
{
    int Idlinha;
    int coluna[20][80];

}Linha;

void gera_quadro_vazio(Quadro* quadro);
void preenche_quadro (Quadro* quadro);
