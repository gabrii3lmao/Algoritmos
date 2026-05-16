#include <vector>
#include <iostream>
using namespace std;

int binarySearch(vector<int> &li, int el)
{
    int esq = 0;
    int dir = li.size() - 1;
    while (esq <= dir)
    {
        int meio = esq + (dir - esq) / 2;

        if (el == li[meio])
        {
            return meio;
        }

        if (el > li[meio])
        {
            esq = meio + 1;
        }
        else
        {
            dir = meio - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 5, 6, 8, 10, 13, 21, 23, 25, 26, 29, 34};
    int alvo = 26;

    int pos = binarySearch(arr, alvo);
    if (pos != -1)
    {
        cout << "Elemento encontrado no indice: " << pos << endl;
    }
    else
        cout << "Elemento não encontrado." << endl;

    return 0;
}
