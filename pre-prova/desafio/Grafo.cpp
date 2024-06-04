#include "Grafo.hpp"
#include <iostream>

Grafo::Grafo(int V){
    this->V = V;
    this->A = 0;
    adj = new int*[V];
    for(int i = 0; i < V; i++){
        adj[i] = new int[V];
        for(int j = 0; j < V; j++){
            adj[i][j] = 0;
        }
    }
}

Grafo::~Grafo(){
    for(int i = 0; i < V; i++){
        delete[] adj[i];
    }
    delete[] adj;
}

void Grafo::insereAresta(int v, int w){
    if(v >= 0 && v < V && w >= 0 && w < V && adj[v][w] == 0){
        adj[v][w] = 1;
        adj[w][v] = 1;
        A++;
    }
}

void Grafo::removeAresta(int v, int w){
    if(v >= 0 && v < V && w >= 0 && w < V && adj[v][w] == 1){
        adj[v][w] = 0;
        adj[w][v] = 0;
        A--;
    }
}

bool Grafo::existeAresta(int v, int w){
    if(v >= 0 && v < V && w >= 0 && w < V){
        return adj[v][w] == 1;
    }
    return false;
}

void Grafo::imprime(){
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            std::cout << adj[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
 
int Grafo::listaAdj(int v){
    int cont = 0;
    for(int i = 0; i < V; i++){
        if(adj[v][i] == 1){
            cont++;
        }
    }
    return cont;
}

int Grafo::getVertices(){
    return V;
}

int Grafo::getArestas(){
    return A;
}