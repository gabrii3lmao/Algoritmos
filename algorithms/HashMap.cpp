#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<string, int> idades;

    idades["Ana"] = 25;
    idades["Carlos"] = 30;

    if (idades.find("Ana") != idades.end())
    {
        cout << "A idade da Ana é: " << idades["Ana"] << endl;
    }

    idades.erase("Carlos");

    return 0;
}