#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> atividade;
    int tam;
    list<int>::iterator it;


    // tamnanho que a gente define como maximo
    tam=10;
    for(int i=0; i<tam; i++)
    {
        atividade.push_front(i);
    }

    //Lugar que voc� quer inserir o dado na lista
    it=atividade.begin();
    advance(it,5);
    //O que voc� vai inserir
    atividade.insert(it,0);

    //Remover a Possicao declara 2 no caso, se arrancar a linha 27 e 28 tira aonde ta apontando a linha 22
    it=atividade.begin();
    advance(it,2);
    atividade.erase(--it);


    cout << "Tamanho da Lista da Atividade  " << atividade.size() << "\n\n";

    tam=atividade.size();
    for(int i=0; i<tam; i++)
        {
            cout << atividade.front() << "\n";
            atividade.pop_front();
        }


    return 0;
}
