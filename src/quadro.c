#include "quadro.h"

void gera_quadro_vazio(apQuadro *quadro)
{
    *quadro = (apQuadro)(malloc(sizeof(Quadro)));

}
void preenche_quadro(apQuadro *quadro)
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            if (i == 0 || i == 19)
            {
                (*quadro)->matriz[i][j] = 2;
            }
            else
            {
                if (j == 0 || j == 79)
                {
                    (*quadro)->matriz[i][j] = 3;
                }
                else
                {
                    (*quadro)->matriz[i][j] = 0;
                }
            }
        }
    }
}

void imprime_quadro(apQuadro quadro)
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            if (quadro->matriz[i][j] == 0 || quadro->matriz[i][j] == 4)
            {
                printf(" ");
            }
            else
            {
                if (quadro->matriz[i][j] == 1)
                {
                    printf("*");
                }
                else
                {
                    if (quadro->matriz[i][j] == 2)
                    {
                        printf("-");
                    }
                    else
                    {
                        if (quadro->matriz[i][j] == 3)
                        {
                            printf("|");
                        }
                    }
                }
            }
        }
        printf("\n");
    }
}

void libera_quadro(apQuadro *quadro)
{
    free(*quadro);
}

int gera_posicao(apQuadro *quadro, int max, int min)
{
    int posicao;

    posicao = rand() % (max - min + 1) + min;
    return posicao;
}

void insere_asterisco(apQuadro *quadro)
{
    int linha, coluna;
    linha = gera_posicao(quadro, 18, 1);
    coluna = gera_posicao(quadro, 78, 1);
    if ((*quadro)->matriz[linha][coluna] == 0)
    {
        (*quadro)->matriz[linha][coluna] = 1;
    }
    else
    {
        insere_asterisco(quadro);
    }
}

void insere_soma(apQuadro *quadro)
{
    int linha, coluna;
    linha = gera_posicao(quadro, 18, 1);
    coluna = gera_posicao(quadro, 78, 1);
    if ((*quadro)->matriz[linha][coluna] == 0 && (*quadro)->matriz[linha - 1][coluna] == 0 && (*quadro)->matriz[linha + 1][coluna] == 0 && (*quadro)->matriz[linha][coluna - 1] == 0 &&
        (*quadro)->matriz[linha][coluna + 1] == 0 && (*quadro)->matriz[linha - 1][coluna - 1] == 0 &&
        (*quadro)->matriz[linha - 1][coluna + 1] == 0 && (*quadro)->matriz[linha + 1][coluna - 1] == 0 &&
        (*quadro)->matriz[linha + 1][coluna + 1] == 0 && (linha - 1) > 0 && (linha + 1) < 19 && (coluna - 1) > 0 && (coluna + 1) < 79)
    {
        (*quadro)->matriz[linha][coluna] = 1;
        (*quadro)->matriz[linha][coluna + 1] = 1;
        (*quadro)->matriz[linha][coluna - 1] = 1;
        (*quadro)->matriz[linha + 1][coluna] = 1;
        (*quadro)->matriz[linha - 1][coluna] = 1;
        (*quadro)->matriz[linha - 1][coluna + 1] = 4;
        (*quadro)->matriz[linha - 1][coluna - 1] = 4;
        (*quadro)->matriz[linha + 1][coluna + 1] = 4;
        (*quadro)->matriz[linha + 1][coluna - 1] = 4;
    }
    else
    {
        insere_soma(quadro);
    }
}

void insere_vezes(apQuadro *quadro)
{
    int linha, coluna;
    linha = gera_posicao(quadro, 18, 1);
    coluna = gera_posicao(quadro, 78, 1);
    if ((*quadro)->matriz[linha][coluna] == 0 && (*quadro)->matriz[linha - 1][coluna] == 0 && (*quadro)->matriz[linha + 1][coluna] == 0 && (*quadro)->matriz[linha][coluna - 1] == 0 &&
        (*quadro)->matriz[linha][coluna + 1] == 0 && (*quadro)->matriz[linha - 1][coluna - 1] == 0 &&
        (*quadro)->matriz[linha - 1][coluna + 1] == 0 && (*quadro)->matriz[linha + 1][coluna - 1] == 0 &&
        (*quadro)->matriz[linha + 1][coluna + 1] == 0 && (linha - 1) > 0 && (linha + 1) < 19 && (coluna - 1) > 0 && (coluna + 1) < 79)
    {
        (*quadro)->matriz[linha][coluna] = 1;
        (*quadro)->matriz[linha][coluna + 1] = 4;
        (*quadro)->matriz[linha][coluna - 1] = 4;
        (*quadro)->matriz[linha + 1][coluna] = 4;
        (*quadro)->matriz[linha - 1][coluna] = 4;
        (*quadro)->matriz[linha - 1][coluna + 1] = 1;
        (*quadro)->matriz[linha - 1][coluna - 1] = 1;
        (*quadro)->matriz[linha + 1][coluna + 1] = 1;
        (*quadro)->matriz[linha + 1][coluna - 1] = 1;
    }
    else
    {
        insere_vezes(quadro);
    }
}
void insere_seta(apQuadro *quadro)
{
    int linha, coluna, direcao;
    linha = gera_posicao(quadro, 18, 1);
    coluna = gera_posicao(quadro, 78, 1);
    direcao = gera_posicao(quadro, 13, 10);
    if ((*quadro)->matriz[linha][coluna] == 0 && (*quadro)->matriz[linha - 1][coluna] == 0 && (*quadro)->matriz[linha + 1][coluna] == 0 && (*quadro)->matriz[linha][coluna - 1] == 0 &&
        (*quadro)->matriz[linha][coluna + 1] == 0 && (*quadro)->matriz[linha - 1][coluna - 1] == 0 &&
        (*quadro)->matriz[linha - 1][coluna + 1] == 0 && (*quadro)->matriz[linha + 1][coluna - 1] == 0 &&
        (*quadro)->matriz[linha + 1][coluna + 1] == 0 && (linha - 1) > 0 && (linha + 1) < 19 && (coluna - 1) > 0 && (coluna + 1) < 79)
    {
        if (direcao == 10)
        {
            (*quadro)->matriz[linha][coluna] = 1;
            (*quadro)->matriz[linha][coluna + 1] = 1;
            (*quadro)->matriz[linha][coluna - 1] = 4;
            (*quadro)->matriz[linha + 1][coluna] = 1;
            (*quadro)->matriz[linha - 1][coluna] = 1;
            (*quadro)->matriz[linha - 1][coluna + 1] = 4;
            (*quadro)->matriz[linha - 1][coluna - 1] = 1;
            (*quadro)->matriz[linha + 1][coluna + 1] = 4;
            (*quadro)->matriz[linha + 1][coluna - 1] = 1;
        }
        else if (direcao == 11)
        {
            (*quadro)->matriz[linha][coluna] = 1;
            (*quadro)->matriz[linha][coluna + 1] = 4;
            (*quadro)->matriz[linha][coluna - 1] = 1;
            (*quadro)->matriz[linha + 1][coluna] = 1;
            (*quadro)->matriz[linha - 1][coluna] = 1;
            (*quadro)->matriz[linha - 1][coluna + 1] = 1;
            (*quadro)->matriz[linha - 1][coluna - 1] = 4;
            (*quadro)->matriz[linha + 1][coluna + 1] = 1;
            (*quadro)->matriz[linha + 1][coluna - 1] = 4;
        }
        else if (direcao == 12)
        {
            (*quadro)->matriz[linha][coluna] = 1;
            (*quadro)->matriz[linha][coluna + 1] = 1;
            (*quadro)->matriz[linha][coluna - 1] = 1;
            (*quadro)->matriz[linha + 1][coluna] = 4;
            (*quadro)->matriz[linha - 1][coluna] = 1;
            (*quadro)->matriz[linha - 1][coluna + 1] = 4;
            (*quadro)->matriz[linha - 1][coluna - 1] = 4;
            (*quadro)->matriz[linha + 1][coluna + 1] = 1;
            (*quadro)->matriz[linha + 1][coluna - 1] = 1;
        }
        else
        {
            (*quadro)->matriz[linha][coluna] = 1;
            (*quadro)->matriz[linha][coluna + 1] = 1;
            (*quadro)->matriz[linha][coluna - 1] = 1;
            (*quadro)->matriz[linha + 1][coluna] = 1;
            (*quadro)->matriz[linha - 1][coluna] = 4;
            (*quadro)->matriz[linha - 1][coluna + 1] = 1;
            (*quadro)->matriz[linha - 1][coluna - 1] = 1;
            (*quadro)->matriz[linha + 1][coluna + 1] = 4;
            (*quadro)->matriz[linha + 1][coluna - 1] = 4;
        }
    }
    else
    {
        insere_seta(quadro);
    }
}

void insere_seta2(apQuadro *quadro)
{
    int linha, coluna, direcao, simbolo;
    linha = gera_posicao(quadro, 18, 1);
    coluna = gera_posicao(quadro, 78, 1);
    direcao = gera_posicao(quadro, 13, 10);
    simbolo = gera_posicao(quadro, 9, 5);
    if ((*quadro)->matriz[linha][coluna] == 0 && (*quadro)->matriz[linha - 1][coluna] == 0 && (*quadro)->matriz[linha + 1][coluna] == 0 && (*quadro)->matriz[linha][coluna - 1] == 0 &&
        (*quadro)->matriz[linha][coluna + 1] == 0 && (*quadro)->matriz[linha - 1][coluna - 1] == 0 &&
        (*quadro)->matriz[linha - 1][coluna + 1] == 0 && (*quadro)->matriz[linha + 1][coluna - 1] == 0 &&
        (*quadro)->matriz[linha + 1][coluna + 1] == 0 && (linha - 1) > 0 && (linha + 1) < 19 && (coluna - 1) > 0 && (coluna + 1) < 79)
    {
        if (direcao == 10)
        {
            (*quadro)->matriz[linha][coluna] = simbolo;
            (*quadro)->matriz[linha][coluna + 1] = simbolo;
            (*quadro)->matriz[linha][coluna - 1] = 4;
            (*quadro)->matriz[linha + 1][coluna] = simbolo;
            (*quadro)->matriz[linha - 1][coluna] = simbolo;
            (*quadro)->matriz[linha - 1][coluna + 1] = 4;
            (*quadro)->matriz[linha - 1][coluna - 1] = simbolo;
            (*quadro)->matriz[linha + 1][coluna + 1] = 4;
            (*quadro)->matriz[linha + 1][coluna - 1] = simbolo;
        }
        else if (direcao == 11)
        {
            (*quadro)->matriz[linha][coluna] = simbolo;
            (*quadro)->matriz[linha][coluna + 1] = 4;
            (*quadro)->matriz[linha][coluna - 1] = simbolo;
            (*quadro)->matriz[linha + 1][coluna] = simbolo;
            (*quadro)->matriz[linha - 1][coluna] = simbolo;
            (*quadro)->matriz[linha - 1][coluna + 1] = simbolo;
            (*quadro)->matriz[linha - 1][coluna - 1] = 4;
            (*quadro)->matriz[linha + 1][coluna + 1] = simbolo;
            (*quadro)->matriz[linha + 1][coluna - 1] = 4;
        }
        else if (direcao == 12)
        {
            (*quadro)->matriz[linha][coluna] = simbolo;
            (*quadro)->matriz[linha][coluna + 1] = simbolo;
            (*quadro)->matriz[linha][coluna - 1] = simbolo;
            (*quadro)->matriz[linha + 1][coluna] = 4;
            (*quadro)->matriz[linha - 1][coluna] = simbolo;
            (*quadro)->matriz[linha - 1][coluna + 1] = 4;
            (*quadro)->matriz[linha - 1][coluna - 1] = 4;
            (*quadro)->matriz[linha + 1][coluna + 1] = simbolo;
            (*quadro)->matriz[linha + 1][coluna - 1] = simbolo;
        }
        else
        {
            (*quadro)->matriz[linha][coluna] = simbolo;
            (*quadro)->matriz[linha][coluna + 1] = simbolo;
            (*quadro)->matriz[linha][coluna - 1] = simbolo;
            (*quadro)->matriz[linha + 1][coluna] = simbolo;
            (*quadro)->matriz[linha - 1][coluna] = 4;
            (*quadro)->matriz[linha - 1][coluna + 1] = simbolo;
            (*quadro)->matriz[linha - 1][coluna - 1] = simbolo;
            (*quadro)->matriz[linha + 1][coluna + 1] = 4;
            (*quadro)->matriz[linha + 1][coluna - 1] = 4;
        }
    }
    else
    {
        insere_seta2(quadro);
    }
}
void imprime_seta(apQuadro quadro)
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            if (quadro->matriz[i][j] == 0 || quadro->matriz[i][j] == 4)
            {
                printf(" ");
            }

            if (quadro->matriz[i][j] == 1)
            {
                printf("*");
            }

            if (quadro->matriz[i][j] == 2)
            {
                printf("-");
            }

            if (quadro->matriz[i][j] == 3)
            {
                printf("|");
            }

            if (quadro->matriz[i][j] == 5)
            {
                printf("+");
            }

            if (quadro->matriz[i][j] == 6)
            {
                printf("!");
            }

            if (quadro->matriz[i][j] == 7)
            {
                printf(".");
            }

            if (quadro->matriz[i][j] == 8)
            {
                printf(",");
            }

            if (quadro->matriz[i][j] == 9)
            {
                printf("?");
            }
        }
        printf("\n");
    }
}


void insere_aleatorio(apQuadro *quadro, int quantidade)
{
    int random = rand() % 3 + 1;
    if (random == 1)
    {
        insere_asterisco(quadro);
    }
    else if (random == 2)
    {
        insere_soma(quadro);
    }
    else if (random == 3)
    {
        insere_vezes(quadro);
    }
}