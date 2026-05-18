#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    // declaração: <Tipo da Chave, Tipo do valor>
    unordered_map<string, int> pontuacoes;

    // 1. Inserção
    pontuacoes["Alice"] = 95;
    pontuacoes["Bob"] = 80;

    // 2. Busca e Atualização - O(1)
    pontuacoes["Alice"] += 5;

    // 3. Verificando se uma chave existe
    // .find() retorna .end() se não encontrar a chave
    if(pontuacoes.find("Carlos") == pontuacoes.end()) {
        cout << "Carlos não fez a prova" << endl;
    }

    // 4. Deleção - O(1)
    pontuacoes.erase("Bob");

    return 0;
}