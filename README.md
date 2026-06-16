# Árvores Binárias — Lista de Exercícios (7 questoes )

Implementação em C++ dos exercícios de árvores binárias

## Arquivos do projeto

- **`main.cpp`** — testa tudo
- **`arvore.h`** — inicia as funções
- **`arvore.cpp`** — implementa

## Exercícios implementados

### 1. Contar nós

A função **`contar`** percorre a árvore recursivamente e retorna a quantidade total de nós.

### 2. Imprimir folhas em in-ordem

A função **`folhas`** percorre a árvore na ordem esquerda-raiz-direita e imprime apenas os nós que não possuem filhos.

### 3. Calcular altura da árvore

Foram feitas duas versões:

- **`alturaRec`** — versão recursiva
- **`alturaIt`** — versão iterativa usando fila

### 4. Preencher campo pai

A função **`preencherPai`** percorre a árvore e coloca corretamente o ponteiro para o pai de cada nó.

Exemplo mostrado no programa:

```cpp
Pai do 20: 30
```

### 5. Verificar se é árvore de busca

A função **`ehBusca`** verifica se a árvore respeita a regra da árvore binária de busca:

- valores menores ficam à esquerda
- valores maiores ficam à direita

### 6. Transformar BST em vetor crescente

A função **`paraVetor`** percorre a árvore em in-ordem e guarda os valores em um vetor crescente.

### 7. Construir árvore e remover o nó 30

A árvore é criada inserindo os valores abaixo, nesta ordem:

```cpp
50, 30, 70, 20, 40, 60, 80, 15, 25, 35, 45, 36
```

Depois, o programa remove o nó de valor **30** e imprime a árvore novamente em ordem.

## Saída

```txt
1) Numero de nos: 12
2) Folhas em in-ordem: 15 25 36 45 60 80
3a) Altura recursiva: 5
3b) Altura iterativa: 5
4) Pais preenchidos. Pai do 20: 30
5) Eh arvore de busca? Sim
6) Vetor crescente: 15 20 25 30 35 36 40 45 50 60 70 80
7) Arvore em ordem antes de remover 30: 15 20 25 30 35 36 40 45 50 60 70 80
7) Arvore em ordem depois de remover 30: 15 20 25 35 36 40 45 50 60 70 80
```

## Compilação e execução

Compile com `g++`:

```bash
g++ ex07_main.cpp ex07_arvore_tad.cpp -o arvores
./arvores
```
