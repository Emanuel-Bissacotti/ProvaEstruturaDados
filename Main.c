#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAMC 4
#define TAML 4
#include "prova.h"

int main(){
    int linha;
    int num;
    int matriz1[TAMC][TAML];
    int vetor1[5], p, s, ini, fim;
    srand(time(NULL));

    while(1){
        printf("\nQual questao deseja: ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            inicializarR(matriz1, TAMC, TAML, TAMC, TAML);
            MostraDiagonalPrincipal(matriz1, TAMC, TAML, TAMC, TAML);
            break;

        case 2:
            printf("Digite os numeros: ");
            IniciarR(vetor1, 5);
            exibirR(vetor1, 5);
            break;

        case 3:
            printf("Digite o valor que deseja procurar e o que deseja subtituir: ");
            scanf("%d", &p);
            scanf("%d", &s);
            SubstituirValor(vetor1, 5, p, s);
            exibirR(vetor1, 5);
            break;

        case 4:
            printf("Digite a linha da matriz que deseja ver: ");
            scanf("%d", &linha);
            MostraLinha(matriz1, TAML, TAMC, linha);
            break;
        case 5:
            printf("Digite o faixa de valor que deseja: ");
            scanf("%d", &ini);
            scanf("%d", &fim);
            printf("Tem %d valores nessa faixa de numeros: ", TotalDeValor(vetor1, 5, ini, fim));
            break;
        default:
            break;
        }
    }
    return 0;
}