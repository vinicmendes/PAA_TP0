#include "base.h"


int main(){
    Quadro obra;
    gera_quadro_vazio(obra);
    preenche_quadro(obra);
    for(int i=0;i<20;i++){
        for(int j=0;j<80;j++){
            //printf("%d",obra->coluna[j]);
        }
        printf("\n");
    }
    return 0;
}