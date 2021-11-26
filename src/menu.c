#include "menu.h"

int gera_menu()
{
    srand(time(NULL));
    apQuadro obra;
    while (1)
    {
        gera_quadro_vazio(&obra);
        preenche_quadro(&obra);
        int opcao;
        int quantidade_figuras;
        printf("PROGRAMA GERADOR DE OBRA DE ARTE:\n");
        printf("=================================\n");
        printf("Escolha o tipo de figura basica a ser usada para criar a obra:\n");
        printf("1 - Asterisco simples.\n");
        printf("2 - Simbolo de soma com asteriscos.\n");
        printf("3 - Letra X com asteriscos.\n");
        printf("4 - Figuras aleatorias\n");
        printf("5 – Obra de arte.\n");
        printf("Indique a opcao desejada: ");
        scanf("%d", &opcao);
        printf("Indique a quantidade de figuras: ");
        scanf("%d", &quantidade_figuras);
        switch (opcao)
        {
        case 1:
            for (int i = 0; i < quantidade_figuras; i++)
            {
                insere_asterisco(&obra);
            }
            imprime_quadro(obra);
            libera_quadro(&obra);
            break;
        case 2:
            for (int i = 0; i < quantidade_figuras; i++)
            {
                insere_soma(&obra);
            }
            imprime_quadro(obra);
            libera_quadro(&obra);
            break;
        case 3:
            for (int i = 0; i < quantidade_figuras; i++)
            {
                insere_vezes(&obra);
            }
            imprime_quadro(obra);
            libera_quadro(&obra);
            break;
        case 4:
            for (int i = 0; i < quantidade_figuras; i++)
            {
                insere_aleatorio(&obra, quantidade_figuras);
            }
            imprime_quadro(obra);
            libera_quadro(&obra);
            break;
        }
    }

}
