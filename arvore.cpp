#include "arvore.h"
#include <iostream>
#include <queue>
#include <algorithm>
#include <climits>
using namespace std;

No* inserir(No* r, int x) {
    if (!r) return new No(x);
    if (x < r->v) r->e = inserir(r->e, x);
    else r->d = inserir(r->d, x);
    return r;
}

No* menor(No* r) {
    while (r && r->e) r = r->e;
    return r;
}

No* remover(No* r, int x) {
    if (!r) return nullptr;

    if (x < r->v) r->e = remover(r->e, x);
    else if (x > r->v) r->d = remover(r->d, x);
    else {
        if (!r->e) return r->d;
        if (!r->d) return r->e;

        No* m = menor(r->d);
        r->v = m->v;
        r->d = remover(r->d, m->v);
    }

    return r;
}

int contar(No* r) {
    if (!r) return 0;
    return 1 + contar(r->e) + contar(r->d);
}

void folhas(No* r) {
    if (!r) return;
    folhas(r->e);
    if (!r->e && !r->d) cout << r->v << " ";
    folhas(r->d);
}

int alturaRec(No* r) {
    if (!r) return 0;
    return 1 + max(alturaRec(r->e), alturaRec(r->d));
}

int alturaIt(No* r) {
    if (!r) return 0;

    queue<No*> fila;
    fila.push(r);
    int h = 0;

    while (!fila.empty()) {
        int qtd = fila.size();
        while (qtd--) {
            No* atual = fila.front();
            fila.pop();
            if (atual->e) fila.push(atual->e);
            if (atual->d) fila.push(atual->d);
        }
        h++;
    }

    return h;
}

void preencherPai(No* r, No* p) {
    if (!r) return;
    r->p = p;
    preencherPai(r->e, r);
    preencherPai(r->d, r);
}

bool ehBuscaAux(No* r, int min, int max) {
    if (!r) return true;
    if (r->v <= min || r->v >= max) return false;
    return ehBuscaAux(r->e, min, r->v) && ehBuscaAux(r->d, r->v, max);
}

bool ehBusca(No* r) {
    return ehBuscaAux(r, INT_MIN, INT_MAX);
}

void paraVetor(No* r, vector<int>& v) {
    if (!r) return;
    paraVetor(r->e, v);
    v.push_back(r->v);
    paraVetor(r->d, v);
}
