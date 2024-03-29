/* Faça um programa para receber nove números inteiros positivos, armazená-los em um vetor, calcular e exibir no dispositivo de saída padrão aqueles números que são primos e suas respectivas posições no vetor. Se nenhum número primo for fornecido, nenhuma mensagem precisará ser exibida.

Entradas:

Nove números inteiros positivos a serem armazenados em um vetor.
Saídas:

Sequência de números primos e suas respectivas posições (índices no vetor). Obs.: Aqueles números que forem primos e suas respectivas posições deverão ser exibidos aos pares.
Exemplo de entrada:

7 13 49 23 6 21 78 98 3 
Exemplo de saída:

7 0
13 1
23 3
3 8
*/

#include <iostream>
using namespace std;

int main(){
    int vet[9];

    cin >> vet[0] >> vet[1] >> vet[2] >> vet[3] >> vet[4] >> vet[5] >> vet[6] >> vet[7] >> vet[8];

    for (int i = 0; i < 9; i++ ){
        if( vet[i] == 2 || vet[i] == 3 || vet[i] == 5 || vet[i] == 7){
            cout << vet[i] << " " << i << endl;
        }
        else if( vet[i] % 2 != 0 && vet[i] % 3 != 0 && vet[i] % 5 != 0 && vet[i] % 7 != 0){
            cout << vet[i] << " " << i << endl;
        }
    }
    return 0;
}