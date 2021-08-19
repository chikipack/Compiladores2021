#include <iostream>
#include <string>
using namespace std;

//////////////////////////Automata Finito NO Determinista////////////////////////////////////////

class AFD{
    private:
        int numeroDeEstados;              //conjunto finito de Estados S
        string estadosPosibles;          //estado S_1, S_2, ... , S_n
        char estadoInicial;             //un estado S_0 (S subinidice 0) que es el estado inicial
        string estadoFinal_F;          //S_3 puede ser un estado final, S_2 tambien puede ser un estado final ...
        string alfabetoDeEntrada;     //Alfabeto de entrada: unicamente 0 y 1, unicamente a y b, etc.
        string cadenaIngresada;
    public:
        void funcionDeTrancicion();
        AFD(int, string, char, string, string, string);
};

AFD::AFD(int _numeroDeEstados, string _estadosPosibles, char _estadoInicial, string _EstadoFinal, string _alfabetoDeEntrada, string _cadenaIngresada){
    numeroDeEstados =_numeroDeEstados;
    _estadosPosibles = estadosPosibles;
    _estadoInicial = estadoInicial;
    _EstadoFinal = estadoFinal_F;
    _alfabetoDeEntrada = alfabetoDeEntrada;
    _cadenaIngresada = cadenaIngresada;


}

int main(){
    
}
