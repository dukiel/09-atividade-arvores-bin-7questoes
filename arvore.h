#ifndef EX07_ARVORE_TAD_H
#define EX07_ARVORE_TAD_H
#include <vector>

struct No {
    int v;
    No* e, * d, * p;
    No(int x) : v(x), e(nullptr), d(nullptr), p(nullptr) {}
};

No* inserir(No* r, int x);
No* remover(No* r, int x);
int contar(No* r);
void folhas(No* r);
int alturaRec(No* r);
int alturaIt(No* r);
void preencherPai(No* r, No* p = nullptr);
bool ehBusca(No* r);
void paraVetor(No* r, std::vector<int>& v);

#endif
