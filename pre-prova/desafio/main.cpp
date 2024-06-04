#include <clocale>
#include <iostream>
#include <string>  
#include "Grafo.hpp"

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    Grafo *g = new Grafo(5);
    g->insereAresta(0, 1);
    g->insereAresta(0, 4);
    g->insereAresta(1, 2);
    g->insereAresta(1, 3);
    g->insereAresta(1, 4);
    g->insereAresta(2, 3);
    g->insereAresta(3, 4);
    

    g->imprime();
    std::cout << "Arestas: " << g->getArestas() << std::endl;
    std::cout << "Vertices: " << g->getVertices() << std::endl;
    
    std::cout << "Lista de adjacencia do vertice 1: " << g->listaAdj(1) << std::endl;

    delete g;

    
    return 0;
}