// Construir um método que receba uma matriz quadrada de inteiros e exiba de 
// forma recursiva a diagonal principal
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAMC 4
#define TAML 4

void inicializarR(int matriz[TAML][TAMC], int lin, int col, int backLin, int backcol)
{
    if (col > 0) {
        matriz[lin - 1][col - 1] = 0;
        inicializarR(matriz, lin, col - 1, backLin, backcol);
    } else if (lin > 0) {
        inicializarR(matriz, lin - 1, backcol ,backLin, backcol);
    }
}

void MostraDiagonalPrincipal(int matriz[TAML][TAMC], int lin, int col, int backLin, int backcol) {
    if (col > 0) {
        MostraDiagonalPrincipal(matriz, lin, col - 1, backLin, backcol);
        if(lin == col){
            matriz[lin-1][col-1] = rand() % 10;
            printf("%d", matriz[lin-1][col-1]);
        }
    } else if (lin - 1 > 0) {
        MostraDiagonalPrincipal(matriz, lin - 1, backcol ,backLin, backcol);
        printf("\n");
    }
}


// Tendo como base um vetor de inteiros de tamanho 5, faça um método recursivo para preencher 
// o vetor com dados vindos do usuário.


void IniciarR(int *v, int n) {
    if (n > 0) {
        scanf("%d", &v[n-1]);
        IniciarR(v, n - 1);
    }
}

void exibirR(int *v, int n) {
    if (n > 0) {
        exibirR(v, n - 1);
        printf("[%d]:%d\t",n - 1, v[n - 1]);
    }
}



// Tendo como base um vetor de inteiros de tamanho 5, faça um método recursivo que substitua um valor por outro. 
// Por exemplo, metodo3(vetor, TAM, valorOriginal, valorDestino)


void SubstituirValor(int *v, int n, int Vo, int VD) {
    if (n > 0) {
        if(v[n-1] == Vo){
            v[n-1] = VD;
        }
        SubstituirValor(v, n - 1, Vo, VD);
    }
}


// Tendo como base uma matriz quadrada de inteiros, faça um método recursivo que exiba uma determinada linha da 
// matriz. Por exemplo, metodo4(matriz, TAML, TAMC, linha).

void MostraLinha(int matriz[TAML][TAMC], int lin, int col, int linha){
    if(linha > TAML){
        return ;
    }

    if (col > 0) {
        MostraLinha(matriz, linha, col - 1, linha);
        printf("%d ", matriz[linha][col-1]);
    } 
}


// Tendo como base um vetor de inteiros, faça um método recursivo que retorne a quantidade de números presentes 
// na faixa. Por exemplo, metodo5(vetor, TAM, ini, fim).

int TotalDeValor(int *v, int n, int ini, int fim){
    if (n > 0) {
        if(v[n-1] >= ini && v[n-1] <= fim){
            return TotalDeValor(v, n - 1, ini, fim) + 1;
        }
        else{
            return TotalDeValor(v, n - 1, ini, fim) + 0;
        }
    }
    return 0;
}