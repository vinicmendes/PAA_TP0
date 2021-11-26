#include "base.h"

int main()
{
    srand(time(NULL));
    apQuadro obra;
    gera_quadro_vazio(&obra);
    preenche_quadro(&obra);
    //gera_posicao(&obra, 10, 0);
    for (int i = 0; i < 100; i++)
    {
        //insere_asterisco(&obra);
        //insere_soma(&obra);
        insere_vezes(&obra);
        //insere_aleatorio(&obra, 10);
    }

    imprime_quadro(obra);
    libera_quadro(&obra);
    return 0;
}