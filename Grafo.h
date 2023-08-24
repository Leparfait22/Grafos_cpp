#ifndef GRAFO_H

#define GRAFO_H
#include <vector>
#include "Aresta.h"

class Grafo {
public:
    Grafo(int num_vertices);
    
    int num_vertices();
    int num_arestas();

    void inserir_arestas(Aresta e);
    void remover_arestas(Aresta e);

    void imprime();
private:
    int num_vertices_;
    int num_arestas_;
    std::vector <std::vector<int>> matriz_adj_;
};

#endif /* CIRCULO_H */
