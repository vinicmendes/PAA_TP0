#include "base.h"

void gera_quadro_vazio(apQuadro* quadro){
    *quadro = (apQuadro) (malloc(sizeof(Quadro)));
    //provisório
    // for(int i=0;i<19;i++){
    //     quadro->Idlinha=i;
    // }
}
void preenche_quadro(apQuadro* quadro){
    for(int i=0;i<20;i++){
        for(int j=0;j<80;j++){
            if(i==0 || i == 19){
                (*quadro)->matriz[i][j] = 2;
                // printf("%d",(*quadro)->coluna[j]);
            }
            else{
                if(j==0 || j == 79){
                    (*quadro)-> matriz[i][j] = 3;
                    // printf("%d",(*quadro)->coluna[j]);
                }
                else{
                    (*quadro)->matriz[i][j] = 0;
                    // printf("%d",(*quadro)->coluna[j]);
                }
            }
        }
    }
}