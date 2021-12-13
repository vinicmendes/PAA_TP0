#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


typedef struct Quadro *apQuadro;
//lista de colunas armazenando números correspondentes a cada caractere: 0 == " ", 1 == "*", 2 == "-", 3 == "|",
//4 == " "(espaços da figura que não podem ser violados);

// para opção 5 -> 5 = "1", 6 = "2", 7 = "3", 8 = "4", 9 = "5"
typedef struct Quadro
{
    int Idlinha;
    int matriz[20][80];

} Quadro;

void gera_quadro_vazio(apQuadro *quadro);
void preenche_quadro(apQuadro *quadro);
void imprime_quadro(apQuadro quadro);
void libera_quadro(apQuadro *quadro);
int gera_posicao(apQuadro *quadro, int max, int min);
void insere_asterisco(apQuadro *quadro);
void insere_soma(apQuadro *quadro);
void insere_vezes(apQuadro *quadro);
void insere_seta(apQuadro *quadro);
void insere_seta2(apQuadro *quadro); //teste
void imprime_seta(apQuadro quadro);  //teste
void insere_aleatorio(apQuadro *quadro, int quantidade);