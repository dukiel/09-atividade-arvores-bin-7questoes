// Aluno: Daniel Luiz Cardoso

#include <iostream>
#include <vector>
#include "arvore.h"
using namespace std;

void imprimir(vector<int>& v) {
    for (int x : v) cout << x << " ";
    cout << endl;
}

int main() {
    int valores[] = { 50, 30, 70, 20, 40, 60, 80, 15, 25, 35, 45, 36 };
    No* raiz = nullptr;

    for (int x : valores) raiz = inserir(raiz, x);
    preencherPai(raiz);

    cout << "1) Numero de nos: " << contar(raiz) << endl;

    cout << "2) Folhas em in-ordem: ";
    folhas(raiz);
    cout << endl;

    cout << "3a) Altura recursiva: " << alturaRec(raiz) << endl;
    cout << "3b) Altura iterativa: " << alturaIt(raiz) << endl;

    cout << "4) Pais preenchidos. Pai do 20: " << raiz->e->e->p->v << endl;

    cout << "5) Eh arvore de busca? ";
    if (ehBusca(raiz)) cout << "Sim" << endl;
    else cout << "Nao" << endl;

    vector<int> v;
    paraVetor(raiz, v);
    cout << "6) Vetor crescente: ";
    imprimir(v);

    cout << "7) Arvore em ordem antes de remover 30: ";
    v.clear();
    paraVetor(raiz, v);
    imprimir(v);

    raiz = remover(raiz, 30);
    preencherPai(raiz);

    cout << "7) Arvore em ordem depois de remover 30: ";
    v.clear();
    paraVetor(raiz, v);
    imprimir(v);

    return 0;
}
