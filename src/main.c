#include "base.h"

int main()
{
    srand(time(NULL));
    apQuadro obra;
    gera_quadro_vazio(&obra);
    preenche_quadro(&obra);
    //gera_posicao(&obra, 10, 0);
    for (int i = 0; i < 20; i++)
    {
        insere_asterisco(&obra);
    }

    imprime_quadro(obra);
    libera_quadro(&obra);
    return 0;
}