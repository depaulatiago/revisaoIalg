/*
Crie um programa que preencha uma primeira matriz de ordem 4 x 5 e uma segunda matriz 5 x 2. O programa deverá, também, calcular e mostrar a matriz resultante do produto matricial das duas matrizes anteriores, armazenando-o em uma terceira matriz de ordem 4 x 2.

Entrada:

Uma matriz 4 x 5.
Uma matriz 5 x 2.
Saída:

Matriz 4 x 2 resultante do produto entre as duas matrizes anteriores.
Exemplo de entrada:

1 2 3 4 5
2 5 9 7 1
3 2 9 4 0
4 6 4 8 8

1 2
2 7
3 6
4 7
5 0
Exemplo de saída:

55 62
72 142
50 102
100 130
*/



#include <iostream>
using namespace std;

int main(){
    int mat1[4][5], mat2[5][2], mat3[4][2];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            mat3[i][j] = 0;
            for (int k = 0; k < 5; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}