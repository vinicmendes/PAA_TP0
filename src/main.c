#include "base.h"

int main()
{
    srand(time(NULL));
    apQuadro obra;
    gera_quadro_vazio(&obra);
    preenche_quadro(&obra);
    //gera_posicao(&obra, 10, 0);
    for (int i = 0; i < 90; i++)
    {
        //insere_asterisco(&obra);
        //insere_soma(&obra);
        insere_vezes(&obra);
    }

    imprime_quadro(obra);
    libera_quadro(&obra);
    return 0;
}