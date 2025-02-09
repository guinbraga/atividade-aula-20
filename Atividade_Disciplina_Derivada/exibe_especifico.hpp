#include <iostream> 
#include <string> 
#include <vector>
#include "Ex1.hpp"
using namespace std;

// Função específica
void ExibeV (const vector<Disciplinas_derivada*>& Col, string Opc = "") { 
    vector<Disciplinas_derivada*>::const_iterator PosV; 
    if(Opc.length()) cout << endl << Opc << endl;
    for(PosV = Col.begin(); PosV != Col.end(); ++PosV)
        cout << **PosV; 
}