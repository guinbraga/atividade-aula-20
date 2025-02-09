#ifndef _DERIVADA
#define _DERIVADA
#include "Disciplina.hpp"

class Disciplinas_derivada : public Disciplina{
    protected:
        int numAlunos;
    public:
        Disciplinas_derivada (long CD, string No, int alunos) : Disciplina(CD, No), numAlunos(alunos) { }

        friend ostream &operator << (ostream &S, const Disciplinas_derivada &D){ 
            S << "Disciplina: " << D.Codigo_ << '\t' << D.Nome_ << '\t' << D.numAlunos << " alunos" << endl; 
            return S; 
        }
};

#endif