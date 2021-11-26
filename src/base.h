#include <stdlib.h>
#include <stdio.h>
#include <string.h>

<<<<<<< Updated upstream
typedef struct Linha *Quadro;
=======
//lista de colunas armazenando números correspondentes a cada caractere: 0 == " ", 1 == "*", 2 == "-", 3 == "|",
//4 == " "(espaços da figura que não podem ser violados); 
>>>>>>> Stashed changes
typedef struct Linha
{
    int Idlinha;
    int coluna[80];

}Linha;

<<<<<<< Updated upstream
void gera_quadro(Quadro quadro);
=======
void gera_quadro_vazio(Linha *quadro);
void preenche_quadro (Linha *quadro);
>>>>>>> Stashed changes
