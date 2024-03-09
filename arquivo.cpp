/* 
Faça um programa que abra um arquivo texto chamado "Meu_Arquivo.txt" e conte o número de caracteres não brancos nele. Escreva o resultado da contagem na saída padrão.

Entrada:

O arquivo de texto "Meu_Arquivo.txt".
Saída:

Número de caracteres não brancos dentro do arquivo.
Exemplo de arquivo:

Vou aproveitar os exercicios do dredd para estudar muito e tirar 100 em IALG!!
Exemplo de saída:

65

*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("Meu_Arquivo.txt");
    if (file.is_open()) {
        char ch;
        int count = 0;
        while (file.get(ch)) {
            if (!isspace(ch)) {
                count++;
            }
        }
        cout << count << endl;
        file.close();
    } else {
        cout << "Failed to open the file." << endl;
    }
    return 0;
}