#include "base.h"

void gera_quadro_vazio(Quadro quadro){
    quadro = (Quadro) (malloc(20 * sizeof(Linha)));
    //provisório
    for(int i=0;i<19;i++){
        quadro->Idlinha=i;
    }
}
void preenche_quadro(Quadro quadro){
    for(int i=0;i<20;i++){
        for(int j=0;j<80;j++){
            if(i==0 || i == 19){
                quadro->coluna[j]= 2;
            }
            else{
                if(j==0 || j == 79){
                    quadro->coluna[j]= 3;
                }
                else{
                    quadro->coluna[j]= 0;
                }
            }
        }
    }
}