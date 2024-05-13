#!/bin/bash
cd acessorios-cpp/ 
g++ -c *.cpp 
cd .. 
cd core-simulador-cpp 
g++ -c *.cpp 
cd .. 
cd personagens-cpp 
g++ -c *.cpp 
cd .. 
g++ principal/main.cpp acessorios-cpp/*.o core-simulador-cpp/*.o personagens-cpp/*.o -o saida 

#g++ acessorios-cpp/*.cpp core-simulador-cpp/*.cpp personagens-cpp/*.cpp principal/main.cpp -o saida