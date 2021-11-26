#include "base.h"

void gera_quadro_vazio(Quadro* quadro){
    *quadro = (Quadro) (malloc(sizeof(Linha)));
    //provisório
    // for(int i=0;i<19;i++){
    //     quadro->Idlinha=i;
    // }
}
void preenche_quadro(Quadro* quadro){
    for(int i=0;i<20;i++){
        for(int j=0;j<80;j++){
            if(i==0 || i == 19){
                (*quadro)->coluna[i][j] = 2;
                // printf("%d",(*quadro)->coluna[j]);
            }
            else{
                if(j==0 || j == 79){
                    (*quadro)->coluna[i][j] = 3;
                    // printf("%d",(*quadro)->coluna[j]);
                }
                else{
                    (*quadro)->coluna[i][j] = 0;
                    // printf("%d",(*quadro)->coluna[j]);
                }
            }
        }
    }
}