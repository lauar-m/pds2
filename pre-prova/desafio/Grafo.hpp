#ifndef GRAFO
#define GRAFO

class Grafo {
    private: 
        int V; //vertices
        int A; //arestas
        int **adj; //matriz de adjacencia
        

    public:
        Grafo(int V);         
        ~Grafo();
        void insereAresta(int v, int w);
        void removeAresta(int v, int w);
        bool existeAresta(int v, int w);
        int getVertices();
        int getArestas();
        void imprime();
        int listaAdj(int v);
};

#endif