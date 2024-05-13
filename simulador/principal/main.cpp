#include <iostream>
#include <string>
#include "../acessorios-hpp/Arco_flamejante.hpp"
#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/Besta.hpp"
#include "../acessorios-hpp/Durabilidade.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/Invulnerabilidade.hpp"
#include "../acessorios-hpp/Machado.hpp"
#include "../acessorios-hpp/Regeneracao.hpp"
#include "../acessorios-hpp/Resiliencia.hpp"
#include "../acessorios-hpp/Tridente.hpp"
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Creeper.hpp"
#include "../personagens-hpp/Esqueleto.hpp"
#include "../personagens-hpp/Steve.hpp"
#include "../personagens-hpp/Villager.hpp"
#include "../personagens-hpp/Zombie.hpp"
#include "../core-simulador-hpp/Simulador.hpp"


using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaAtaque* arma3 = new Arco_flamejante("Arco Flamejante", 0, 100);
    ArmaAtaque* arma4 = new Besta("Besta", 0, 80);
    ArmaAtaque* arma5 = new Espada("Espada", 0, 90);
    ArmaAtaque* arma6 = new Machado("Machado", 0, 60);
    ArmaAtaque* arma7 = new Tridente("Tridente", 0, 100);


    ArmaDefesa* escudo = new Escudo("Latão", 1);
    ArmaDefesa* escudo2 = new Armadura("Armadura de Ferro", 2);
    ArmaDefesa* escudo3 = new Durabilidade("Durabilidade", 3);
    ArmaDefesa* escudo4 = new Invulnerabilidade("Invulnerabilidade", 4);
    ArmaDefesa* escudo5 = new Regeneracao("Regeneração", 5);
    ArmaDefesa* escudo6 = new Resiliencia("Resiliência", 6);
    
    Personagem* chaves = new Chaves(1, "Chaves", 100, arma, escudo);
    Personagem* steve = new Steve(2, "Steve", 100, arma5, escudo2);
    Personagem* esqueleto = new Esqueleto(3, "Esqueleto", 100, arma2, escudo3);
    Personagem* zombie = new Zombie(4, "Zombie", 100, arma3, escudo4);
    Personagem* creeper = new Creeper(5, "Creeper", 100, arma6, escudo5);
    Personagem* villager = new Villager(6, "Villager", 100, arma7, escudo6);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(chaves, 1);
    simulador->adicionarPersonagem(steve, 2);
    simulador->adicionarPersonagem(esqueleto, 1);
    simulador->adicionarPersonagem(zombie, 2);
    simulador->adicionarPersonagem(creeper, 1);
    simulador->adicionarPersonagem(villager, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}