/*
Um hidrocarboneto é um composto químico formado por átomos de carbono e hidrogênio. Faça um programa que crie um registro chamado Hidrocarboneto 
contendo os campos inteiros C e H usados para guardar a quantidade de carbonos e hidrogênios, respectivamente, de um hidrocarboneto.
 No subprograma principal aloque dinamicamente um registro Hidrocarboneto e peça ao usuário as quantidades de carbono e hidrogênio do mesmo. 
 Sabendo que massa molecular do carbono é 12 e do hidrogênio é 1, seu programa deverá calcular e exibir a massa molecular do composto.

Entradas:

Quantidade de carbonos do hidrocarboneto.
Quantidade de hidrogênios do hidrocarboneto.
Saídas:

Massa molecular do hidrocarboneto.
Exemplo de Entrada:

1 4
Exemplo de Saída:

16
16
*/

#include <iostream>
using namespace std;

struct Hidrocarboneto {
    int C;
    int H;
};

int main() {
    Hidrocarboneto* hc = new Hidrocarboneto;

    cin >> hc->C;

    cin >> hc->H;
    
    int massaMolecular = (hc->C * 12) + (hc->H * 1);
    
    cout << massaMolecular << endl;
    
    delete hc;
    
    return 0;
}