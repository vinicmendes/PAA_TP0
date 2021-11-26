#include "base.h"

int main()
{
    apQuadro obra;
    gera_quadro_vazio(&obra);
    preenche_quadro(&obra);
    imprime_quadro(obra);
    libera_quadro(&obra);
    return 0;
}