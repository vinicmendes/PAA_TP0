#include "base.h"


int main(){
    Linha* obra;
    gera_quadro(obra);
    for(int i=0;i<20;i++){
        for(int j=0;j<80;j++){
            if(i==0 || i == 19){
                printf("-");
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
    return 0;
}