#include "base.h"

void gera_quadro_vazio(Linha *quadro){
    quadro = (Linha*) (malloc(20 * sizeof(Linha)));
}
void preenche_quadro(Linha *quadro){
    for(int i=0;i<20;i++){
        for(int j=0;j<80;j++){
            if(i==0 || i == 19){
                quadro->coluna[j]=
            }
            else{
                if(j==0 || j == 79){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}