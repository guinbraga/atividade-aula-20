/*2 - Implemente uma função genérica capaz de realizar os cálculos de soma, subtração, divisão e multiplicação para valores numéricos.*/
#include <iostream>

template <class Tipo> void calculos(Tipo x, Tipo y, Tipo* resultados){
    resultados[0] = x+y;
    resultados[1] = x-y;
    resultados[2] = x/y;
    resultados[3] = x*y;
}

int main(){
    int x = 30, y = 5;
    int* resultados = new int[4];
    calculos(x, y, resultados);
    std::cout << "Resultados da soma, subtracao, divisao e multiplicacao, respectivamente: " << std::endl;
    for (int i = 0; i < 4; ++i){
        std::cout << resultados[i] << std::endl;
    }

}