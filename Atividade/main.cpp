#include <iostream>
#include "Ex1.hpp"
#include "exibe_especifico.hpp"
#include "exibe_generico.hpp"


using namespace std;

int main() {
    vector <Disciplinas_derivada*> Disciplinas;
    Disciplinas.push_back(new Disciplinas_derivada(155,"LF2", 40)); 
    Disciplinas.push_back(new Disciplinas_derivada(156,"XQ9", 38)); 
    Disciplinas.push_back(new Disciplinas_derivada(157,"EX9", 14)); 

    ExibeV(Disciplinas, "Disciplinas da matricula"); 

    Exibe(Disciplinas, "Disciplinas da matricula");
    
    return 0;
}
